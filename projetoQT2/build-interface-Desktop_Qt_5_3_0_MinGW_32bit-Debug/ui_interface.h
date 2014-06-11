/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QAction *actionSair;
    QAction *actionQuem_Somos;
    QAction *actionFun_o;
    QWidget *centralWidget;
    QPushButton *botaoCalcular;
    QPushButton *botaoSair;
    QFrame *line;
    QDoubleSpinBox *valorX;
    QDoubleSpinBox *valorH;
    QDoubleSpinBox *valorY;
    QDoubleSpinBox *valorN;
    QLabel *label;
    QFrame *line_2;
    QLabel *label_2;
    QFrame *line_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *funcao;
    QComboBox *comboMetodo;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QComboBox *comboMetodo_2;
    QLabel *label_10;
    QLabel *label_11;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuSobre;
    QMenu *menuOp_es;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(402, 395);
        Interface->setStyleSheet(QStringLiteral("background-color: rgb(243,243,243);"));
        actionSair = new QAction(Interface);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionQuem_Somos = new QAction(Interface);
        actionQuem_Somos->setObjectName(QStringLiteral("actionQuem_Somos"));
        actionFun_o = new QAction(Interface);
        actionFun_o->setObjectName(QStringLiteral("actionFun_o"));
        centralWidget = new QWidget(Interface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        botaoCalcular = new QPushButton(centralWidget);
        botaoCalcular->setObjectName(QStringLiteral("botaoCalcular"));
        botaoCalcular->setGeometry(QRect(320, 330, 75, 23));
        botaoCalcular->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(196, 202, 221, 255), stop:1 rgba(175, 193, 219, 255));"));
        botaoSair = new QPushButton(centralWidget);
        botaoSair->setObjectName(QStringLiteral("botaoSair"));
        botaoSair->setGeometry(QRect(230, 330, 75, 23));
        botaoSair->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(243, 243, 243, 255), stop:1 rgba(236, 236, 236, 255));"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 240, 411, 20));
        line->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        valorX = new QDoubleSpinBox(centralWidget);
        valorX->setObjectName(QStringLiteral("valorX"));
        valorX->setGeometry(QRect(100, 170, 61, 20));
        valorH = new QDoubleSpinBox(centralWidget);
        valorH->setObjectName(QStringLiteral("valorH"));
        valorH->setGeometry(QRect(290, 170, 62, 22));
        valorH->setDecimals(4);
        valorH->setMaximum(9999);
        valorH->setSingleStep(0.01);
        valorH->setValue(0.01);
        valorY = new QDoubleSpinBox(centralWidget);
        valorY->setObjectName(QStringLiteral("valorY"));
        valorY->setGeometry(QRect(100, 200, 62, 20));
        valorN = new QDoubleSpinBox(centralWidget);
        valorN->setObjectName(QStringLiteral("valorN"));
        valorN->setGeometry(QRect(290, 200, 62, 22));
        valorN->setDecimals(0);
        valorN->setMaximum(99999);
        valorN->setSingleStep(1);
        valorN->setValue(100);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 41, 16));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 60, 401, 20));
        line_2->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 71, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 130, 401, 20));
        line_3->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 240, 46, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 90, 21, 16));
        funcao = new QLineEdit(centralWidget);
        funcao->setObjectName(QStringLiteral("funcao"));
        funcao->setGeometry(QRect(160, 90, 113, 20));
        comboMetodo = new QComboBox(centralWidget);
        comboMetodo->setObjectName(QStringLiteral("comboMetodo"));
        comboMetodo->setGeometry(QRect(70, 280, 69, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 170, 46, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 200, 46, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 170, 46, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 200, 71, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(150, 30, 111, 16));
        QFont font;
        font.setPointSize(12);
        label_9->setFont(font);
        comboMetodo_2 = new QComboBox(centralWidget);
        comboMetodo_2->setObjectName(QStringLiteral("comboMetodo_2"));
        comboMetodo_2->setEnabled(true);
        comboMetodo_2->setGeometry(QRect(170, 280, 69, 22));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 260, 46, 13));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(170, 260, 46, 13));
        Interface->setCentralWidget(centralWidget);
        botaoCalcular->raise();
        botaoSair->raise();
        line->raise();
        valorX->raise();
        valorH->raise();
        valorY->raise();
        valorN->raise();
        line_2->raise();
        line_3->raise();
        label_2->raise();
        label_3->raise();
        label->raise();
        label_4->raise();
        funcao->raise();
        comboMetodo->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        comboMetodo_2->raise();
        label_10->raise();
        label_11->raise();
        statusBar = new QStatusBar(Interface);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Interface->setStatusBar(statusBar);
        menuBar = new QMenuBar(Interface);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 402, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        menuSobre = new QMenu(menuBar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        menuOp_es = new QMenu(menuBar);
        menuOp_es->setObjectName(QStringLiteral("menuOp_es"));
        //Interface->setMenuBar(menuBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuOp_es->menuAction());
        menuBar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionSair);
        menuSobre->addAction(actionQuem_Somos);
        menuOp_es->addAction(actionFun_o);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Interface", 0));
        actionSair->setText(QApplication::translate("Interface", "Sair", 0));
        actionQuem_Somos->setText(QApplication::translate("Interface", "Quem Somos", 0));
        actionFun_o->setText(QApplication::translate("Interface", "Fun\303\247\303\243o", 0));
        botaoCalcular->setText(QApplication::translate("Interface", "Calcular", 0));
        botaoSair->setText(QApplication::translate("Interface", "Sair", 0));
        valorH->setSuffix(QString());
        label->setText(QApplication::translate("Interface", "Fun\303\247\303\243o", 0));
        label_2->setText(QApplication::translate("Interface", "Valores iniciais", 0));
        label_3->setText(QApplication::translate("Interface", "M\303\251todos", 0));
        label_4->setText(QApplication::translate("Interface", "y' = ", 0));
        funcao->setText(QApplication::translate("Interface", "sin(pi * x) + e", 0));
        comboMetodo->clear();
        comboMetodo->insertItems(0, QStringList()
         << QApplication::translate("Interface", "Euler", 0)
         << QApplication::translate("Interface", "RK-2", 0)
         << QApplication::translate("Interface", "RK-3", 0)
         << QApplication::translate("Interface", "RK-4", 0)
        );
        label_5->setText(QApplication::translate("Interface", "Valor x:", 0));
        label_6->setText(QApplication::translate("Interface", "Valor y:", 0));
        label_7->setText(QApplication::translate("Interface", "Passo h:", 0));
        label_8->setText(QApplication::translate("Interface", "Subintervalo n:", 0));
        label_9->setText(QApplication::translate("Interface", "Crie sua EDO", 0));
        comboMetodo_2->clear();
        comboMetodo_2->insertItems(0, QStringList()
         << QApplication::translate("Interface", "-----", 0)
         << QApplication::translate("Interface", "Euler", 0)
         << QApplication::translate("Interface", "RK-2", 0)
         << QApplication::translate("Interface", "RK-3", 0)
         << QApplication::translate("Interface", "RK-4", 0)
        );
        label_10->setText(QApplication::translate("Interface", "Corretor", 0));
        label_11->setText(QApplication::translate("Interface", "Preditor", 0));
        menuArquivo->setTitle(QApplication::translate("Interface", "Arquivo", 0));
        menuSobre->setTitle(QApplication::translate("Interface", "Sobre", 0));
        menuOp_es->setTitle(QApplication::translate("Interface", "Op\303\247\303\265es", 0));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
