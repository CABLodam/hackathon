#ifndef TYPES_H
#define TYPES_H

#include <QStackedWidget>
#include <vector>

namespace Pages
{
    const int Settings = 0;
    const int Settings_Edit = 1;
    const int Overview = 2;
    const int Menu = 3;
}

class ISetCheckpoint
{
public:
    virtual void SetCheckpoint() = 0;
};

class Hacks
{
public:
    inline static Hacks& Get()
    {
        static Hacks hack;
        return hack;
    }

    inline void AddSetCheckpoint(ISetCheckpoint* s) { _setcp.push_back(s); }
    inline void DoSetcheckpoint()
    {
        for (ISetCheckpoint* s : _setcp)
        {
            s->SetCheckpoint();
        }
    }

    inline int GetSetPoint() { return _setPoint; }
    inline void IncSetPoint() { _setPoint++; }
    inline void DecSetPoint() { _setPoint--; }

    inline QStackedWidget* GetContentHolder() { return _contentHolder; }
    inline void SetContentHolder(QStackedWidget* f) { _contentHolder = f; }

private:
    Hacks() {}
    int _setPoint = 25;
    QStackedWidget* _contentHolder;
    std::vector<ISetCheckpoint*> _setcp;
};

#endif // TYPES_H
