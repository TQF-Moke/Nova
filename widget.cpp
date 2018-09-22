#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}
//这里完全不知道下面这段怎么正常运作
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
//-----------------
Widget::~Widget()
{
    delete ui;
}
