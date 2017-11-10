#ifndef OVERVIEW_H
#define OVERVIEW_H

#include <QWidget>

namespace Ui {
class Overview;
}

class Overview : public QWidget
{
    Q_OBJECT

public:
    explicit Overview(QWidget *parent = 0);
    ~Overview();

private:
    Ui::Overview *ui;
};

#endif // OVERVIEW_H
