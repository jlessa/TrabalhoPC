#include "interface.h"
#include "ui_interface.h"
#include "interfaceTabela.h"
#include "edo.c"
#include <iostream>
#include <fstream>
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <iomanip>

using namespace std;

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

int valN = 100, posMetodo=0;
double valX = 0.0, valY = 0.0, valH = 0.01;
QString expFun = "sin(e * pi * x)";
bool posMetodoPreditor = false;

STARTUPINFO si;
PROCESS_INFORMATION pi;

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
    fSet(fun.toUtf8().data());
}


void Interface::on_comboMetodo_activated(int index)
{
   posMetodo = index;
}


void Interface::on_isCorretor_clicked()
{
    posMetodoPreditor = !posMetodoPreditor;
}

void Interface::on_botaoCalcular_clicked()
{
    float x[valN+1],y[valN+1];
    double x2[valN+1],y2[valN+1];
    if(!posMetodoPreditor){
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
    }else {
        preditorCorretor(valX,valY,valH,valN, posMetodo,x,y);
    }
    ofstream outFile;
    remove("pontos.txt");
    outFile.open("pontos.txt");
    for(int i=0; i<valN+1; i++){
        y2[i] = y[i];
        x2[i] = x[i];
        outFile << std::fixed << std::setw( 15 ) << std::setprecision( 15 ) << std::setfill( '0' ) << x[i] << " " << y[i] << "\n";
    }
    outFile.close();

    LPCTSTR pName = TEXT(".\\gnuplot\\bin\\wgnuplot.exe");
    ZeroMemory( &si, sizeof(si) );
    si.cb = sizeof(si);
    ZeroMemory( &pi, sizeof(pi) );
    if( !CreateProcess( pName,   // No module name (use command line)
            TEXT("-persist -e \"set xlabel 'X';set ylabel 'Y';set xzeroaxis linetype 3 linewidth 1.5;set yzeroaxis linetype 3 linewidth 1.5;plot 'pontos.txt' with lines\" -persist"),        // Command line
            NULL,           // Process handle not inheritable
            NULL,           // Thread handle not inheritable
            TRUE,          // Set handle inheritance to FALSE
            0,              // No creation flags
            NULL,           // Use parent's environment block
            NULL,           // Use parent's starting directory
            &si,            // Pointer to STARTUPINFO structure
            &pi )           // Pointer to PROCESS_INFORMATION structure
        )
        {
            printf( "CreateProcess failed (%d).\n", GetLastError() );
        }

    //WaitForSingleObject( pi.hProcess, INFINITE );

    // Close process and thread handles.
    //CloseHandle( pi.hProcess );
    //CloseHandle( pi.hThread );
    //plot(); // Abre um processo que usa koolplot para mostrar os graficos do arquivo pontos.txt
    interfaceTabela * segundaTela = new interfaceTabela(this);
    segundaTela->setModal(true);
    segundaTela->show();
    segundaTela->informacoesTabela(x2,y2,valH,valN);
    segundaTela->exec();

    delete segundaTela;


}

void Interface::on_actionSair_triggered()
{
    close();
}

void Interface::on_actionQuem_Somos_triggered()
{
    QMessageBox::information(this,"Quem Somos",
                             "Trabalho Programação Científica\nCiência da Computação 2014.1\n\nOrientadora: Regina Legal\n\nMembros:\nCafer Cruz\nFelipe Godoy\nJefferson Lessa\nRomulo Martins");
}

void Interface::on_actionFun_o_triggered()
{
    QMessageBox::information(this,"Comandos Válidos",
                             "Lista de comandos, disponíveis:\n\nabs(double n)\ncos(double n)\nacos(double n)\nsin(double n)\nasin(double n)\ntan(double n)\natan(double n)\natan2(double n,double n1)\nceil(double n)\nsenh(double n)\ncosh(double n)\ntanh(double n)\ndeg(double n)\nexp(double n)\nfloor(double n)\nfmod(double n)\nfrexp(double n),huge()\ndlexp()\nlog(int n)\nlog10(int n)\nmax(double n, double n1)\nmin(double n, double n1)\nmodf(double n)\ne->(constante)\npi->(constante)\npow(double n,double n1)\nrad(double n)\nrandom(double n,double n1)\nrandomseed(double n)\n\nMais informações em:\nhttp://lua-users.org/wiki/MathLibraryTutorial");

}


