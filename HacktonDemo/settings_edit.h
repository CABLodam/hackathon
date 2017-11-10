#ifndef SETTINGS_EDIT_H
#define SETTINGS_EDIT_H

#include <QWidget>
#include "types.h"

namespace Ui {
class Settings_Edit;
}

class Settings_Edit : public QWidget, public ISetCheckpoint
{
    Q_OBJECT

public:
    explicit Settings_Edit(QWidget *parent = 0);
    void SetCheckpoint();
    ~Settings_Edit();

private slots:
    void on_downArrow_clicked();

    void on_upArrow_clicked();

private:
    Ui::Settings_Edit *ui;
};

#endif // SETTINGS_EDIT_H
