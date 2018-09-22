#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}
//--------不规则窗体函数---无法使用------
{
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinimizeButtonHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    pix.load(":/new/prefix1/133.png");
    this->resize(pix.size());
}
void Widget::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,pix);
}
//-----结束线--------
Widget::~Widget()
{
    delete ui;
}
