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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interface
{
public:
    QWidget *centralWidget;
    QPushButton *botaoCalcular;
    QPushButton *botaoSair;
    QCheckBox *checkPreditor;
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
    QLabel *escmet;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Interface)
    {
        if (Interface->objectName().isEmpty())
            Interface->setObjectName(QStringLiteral("Interface"));
        Interface->resize(402, 322);
        Interface->setStyleSheet(QStringLiteral("background-color: rgb(236, 233, 236);"));
        centralWidget = new QWidget(Interface);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        botaoCalcular = new QPushButton(centralWidget);
        botaoCalcular->setObjectName(QStringLiteral("botaoCalcular"));
        botaoCalcular->setGeometry(QRect(320, 280, 75, 23));
        botaoSair = new QPushButton(centralWidget);
        botaoSair->setObjectName(QStringLiteral("botaoSair"));
        botaoSair->setGeometry(QRect(230, 280, 75, 23));
        botaoSair->setStyleSheet(QStringLiteral(""));
        checkPreditor = new QCheckBox(centralWidget);
        checkPreditor->setObjectName(QStringLiteral("checkPreditor"));
        checkPreditor->setGeometry(QRect(200, 230, 101, 17));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 190, 411, 20));
        line->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        valorX = new QDoubleSpinBox(centralWidget);
        valorX->setObjectName(QStringLiteral("valorX"));
        valorX->setGeometry(QRect(100, 120, 61, 20));
        valorH = new QDoubleSpinBox(centralWidget);
        valorH->setObjectName(QStringLiteral("valorH"));
        valorH->setGeometry(QRect(290, 120, 62, 22));
        valorY = new QDoubleSpinBox(centralWidget);
        valorY->setObjectName(QStringLiteral("valorY"));
        valorY->setGeometry(QRect(100, 150, 62, 20));
        valorN = new QDoubleSpinBox(centralWidget);
        valorN->setObjectName(QStringLiteral("valorN"));
        valorN->setGeometry(QRect(290, 150, 62, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 41, 16));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 10, 401, 20));
        line_2->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 71, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 80, 401, 20));
        line_3->setStyleSheet(QStringLiteral("color: rgb(196, 202, 221);"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 46, 13));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 40, 21, 16));
        funcao = new QLineEdit(centralWidget);
        funcao->setObjectName(QStringLiteral("funcao"));
        funcao->setGeometry(QRect(160, 40, 113, 20));
        comboMetodo = new QComboBox(centralWidget);
        comboMetodo->setObjectName(QStringLiteral("comboMetodo"));
        comboMetodo->setGeometry(QRect(110, 230, 69, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 120, 46, 21));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 150, 46, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(210, 120, 46, 21));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(210, 150, 71, 21));
        escmet = new QLabel(centralWidget);
        escmet->setObjectName(QStringLiteral("escmet"));
        escmet->setGeometry(QRect(60, 280, 46, 13));
        Interface->setCentralWidget(centralWidget);
        botaoCalcular->raise();
        botaoSair->raise();
        checkPreditor->raise();
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
        escmet->raise();
        statusBar = new QStatusBar(Interface);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Interface->setStatusBar(statusBar);

        retranslateUi(Interface);

        QMetaObject::connectSlotsByName(Interface);
    } // setupUi

    void retranslateUi(QMainWindow *Interface)
    {
        Interface->setWindowTitle(QApplication::translate("Interface", "Interface", 0));
        botaoCalcular->setText(QApplication::translate("Interface", "Calcular", 0));
        botaoSair->setText(QApplication::translate("Interface", "Sair", 0));
        checkPreditor->setText(QApplication::translate("Interface", "Preditor-Corretor", 0));
        label->setText(QApplication::translate("Interface", "Fun\303\247\303\243o", 0));
        label_2->setText(QApplication::translate("Interface", "Valores iniciais", 0));
        label_3->setText(QApplication::translate("Interface", "M\303\251todos", 0));
        label_4->setText(QApplication::translate("Interface", "y' = ", 0));
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
        escmet->setText(QApplication::translate("Interface", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Interface: public Ui_Interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
