#include "task_11_10.h"
#include "ui_task_11_10.h"

task_11_10::task_11_10(QWidget *parent) :
    QMainWindow(parent)
{
    this->setGeometry(20,50, 250,170);

    m_label = new QLabel("HELLO", this);
    m_label->setGeometry(QRect(QPoint(30,30),QSize(70,20)));

    m_check = new QCheckBox("visible?", this);
    m_check->setGeometry(QRect(QPoint(120,30),QSize(70,20)));
    connect(m_check, SIGNAL(clicked(bool)), this,SLOT(on_checkBox_stateChanged(bool)));
}

task_11_10::~task_11_10()
{
    delete m_label;
    delete m_check;
}

void task_11_10::on_checkBox_stateChanged(bool arg1)
{
    if (arg1)
    {
        m_label->setVisible(false);
    }
    else
    {
        m_label->setVisible(true);
    }
}
