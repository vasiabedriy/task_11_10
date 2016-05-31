#ifndef TASK_11_10_H
#define TASK_11_10_H

#include <QMainWindow>
#include <QLabel>
#include <QCheckBox>

namespace Ui {
class task_11_10;
}

class task_11_10 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_11_10(QWidget *parent = 0);
    ~task_11_10();

private slots:
    void on_checkBox_stateChanged(bool arg1);

private:
    QLabel* m_label;
    QCheckBox* m_check;
};

#endif // TASK_11_10_H
