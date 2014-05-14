#include "interface.h"
#include "ui_interface.h"
#include "interfaceTabela.h"

Interface::Interface(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
}

Interface::~Interface()
{
    delete ui;
}

int valX, valY, valH, valN, posMetodo=0;
QString expFun;
bool isPreditor = false;

void Interface::on_botaoSair_clicked()
{
    close();
}



void Interface::on_valorX_valueChanged(double x)
{
    valX = x;
}

void Interface::on_valorY_valueChanged(double y)
{
    valY = y;
}

void Interface::on_valorH_valueChanged(double h)
{
    valH = h;
}

void Interface::on_valorN_valueChanged(double n)
{
    valN = n;
}


void Interface::on_funcao_textEdited(const QString &fun)
{
    expFun = fun;
}

void Interface::on_checkPreditor_clicked()
{
    isPreditor = !isPreditor;
}


void Interface::on_comboMetodo_activated(int index)
{
   posMetodo = index;
}


void Interface::on_botaoCalcular_clicked()
{
    interfaceTabela * segundaTela = new interfaceTabela(this);
    segundaTela->setModal(true);
    segundaTela->show();
    segundaTela->informacoesTabela(valX,valY,valH,valN);
    segundaTela->exec();

    delete segundaTela;

}




