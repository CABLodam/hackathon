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
        for (int n = 0; n < _setcp.size(); n++)
        {
            _setcp.at(n)->SetCheckpoint();
        }
    }

    inline int GetSetPoint() { return _setPoint; }
    inline void IncSetPoint() { _setPoint++; }
    inline void DecSetPoint() { _setPoint--; }

    inline QStackedWidget* GetContentHolder() { return _contentHolder; }
    inline void SetContentHolder(QStackedWidget* f) { _contentHolder = f; }

private:
    Hacks() { _setPoint = 21; }
    int _setPoint;
    QStackedWidget* _contentHolder;
    std::vector<ISetCheckpoint*> _setcp;
};

#endif // TYPES_H
