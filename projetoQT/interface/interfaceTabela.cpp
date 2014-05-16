#include "interfaceTabela.h"
#include "ui_interfaceTabela.h"

interfaceTabela::interfaceTabela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interfaceTabela)
{
    ui->setupUi(this);
}

interfaceTabela::~interfaceTabela()
{
    delete ui;
}

void interfaceTabela::setFun(QString &fun){

}

void interfaceTabela::escolhaPreditor(bool esc){

}

void interfaceTabela::escolhaMetodo(int pos){

}

void interfaceTabela::informacoesTabela(double x,double y,double h,double n)
{
    model = new QStandardItemModel((int)n, 3,this);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("x"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("y"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("h"));

    for(int linha = 0; linha <(int)n; linha++)
    {
        for(int coluna = 0; coluna < 3; coluna++)
        {
            QModelIndex ind = model->index(linha,coluna,QModelIndex());
            model->setData(ind,0);
            if(coluna==2)
            {
                model->setData(ind,h);
            }
            if(coluna==0)
            {
                x = x + h;
                model->setData(ind,x);
            }

        }

    }
    ui->tableView->setModel(model);
}



