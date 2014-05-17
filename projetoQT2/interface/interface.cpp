#include "interface.h"
#include "ui_interface.h"
#include "interfaceTabela.h"
#include "edo.c"

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
    float x[valN+1],y[valN+1];
    double x2[valN+1],y2[valN+1];

    if(posMetodo == 0){
        metodoEuler(valX,valY,valH,valN,x,y);
    }
    if(posMetodo == 1){
        rungeKuttaSegundaOrdem(valX,valY,valH,valN,x,y);
    }
    if(posMetodo == 2){
        rungeKuttaTerceiraOrdem(valX,valY,valH,valN,x,y);
    }
    if(posMetodo == 3){
        rungeKuttaQuartaOrdem(valX,valY,valH,valN,x,y);
    }
    for(int i=0; i<valN+1; i++){
        y2[i] = y[i];
        x2[i] = x[i];
    }
    interfaceTabela * segundaTela = new interfaceTabela(this);
    segundaTela->setModal(true);
    segundaTela->show();
    segundaTela->informacoesTabela(x2,y2,valH,valN);
    segundaTela->exec();

    delete segundaTela;

}




