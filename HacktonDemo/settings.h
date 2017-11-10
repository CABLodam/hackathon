#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include "types.h"

namespace Ui {
class Settings;
}

class Settings : public QWidget, public ISetCheckpoint
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    void SetCheckpoint();
    ~Settings();

private:
    Ui::Settings *ui;
};

#endif // SETTINGS_H
