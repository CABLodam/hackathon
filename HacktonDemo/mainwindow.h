#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include "settings.h"
#include "settings_edit.h"
#include "overview.h"
#include "menu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();    

private slots:    

    void on_pushButton_clicked();

private:
    Ui::MainWindow* _ui;
    Settings* _settings;
    Settings_Edit* _settingsEdit;
    Overview* _overview;
    Menu* _menu;
};
#endif // MAINWINDOW_H
