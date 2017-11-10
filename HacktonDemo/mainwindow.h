#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

#include "settings.h"
#include "overview.h"

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

private:
    Ui::MainWindow* _ui;
    Settings* _settings;
    Overview* _overview;
};
#endif // MAINWINDOW_H
