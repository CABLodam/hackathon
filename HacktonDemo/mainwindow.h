#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QPixmap& GetNextView();
    QPixmap& GetPrevView();



private slots:    

private:
    Ui::MainWindow *ui;
    std::vector<QPixmap> _views;
};
#endif // MAINWINDOW_H
