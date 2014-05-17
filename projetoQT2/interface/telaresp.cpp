#include "telaresp.h"
#include "ui_telaresp.h"

telaResp::telaResp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaResp)
{
    ui->setupUi(this);
}

telaResp::~telaResp()
{
    delete ui;
}

void telaResp::valorEscolidos(double x,double y,double h,double n)
{
    ui->valX->setNum(x);
    ui->valY->setNum(y);
    ui->valH->setNum(h);
    ui->valN->setNum(n);

}

void telaResp::setFun(QString &fun)
{
    ui->valFu->setText(fun);
}

void telaResp::escolhaPreditor(bool esc)
{
   ui->escPreditor->setText("False");
   if(esc) ui->escPreditor->setText("True");
}

void telaResp::escolhaMetodo(int pos)
{
    ui->escMetodo->setNum(pos);
}
