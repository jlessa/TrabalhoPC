/********************************************************************************
** Form generated from reading UI file 'telaresp.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELARESP_H
#define UI_TELARESP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_telaResp
{
public:
    QLabel *valX;
    QLabel *valY;
    QLabel *valFu;
    QLabel *valN;
    QLabel *valH;
    QLabel *escPreditor;
    QLabel *escMetodo;

    void setupUi(QDialog *telaResp)
    {
        if (telaResp->objectName().isEmpty())
            telaResp->setObjectName(QStringLiteral("telaResp"));
        telaResp->resize(400, 214);
        valX = new QLabel(telaResp);
        valX->setObjectName(QStringLiteral("valX"));
        valX->setGeometry(QRect(30, 30, 46, 13));
        valY = new QLabel(telaResp);
        valY->setObjectName(QStringLiteral("valY"));
        valY->setGeometry(QRect(130, 30, 46, 13));
        valFu = new QLabel(telaResp);
        valFu->setObjectName(QStringLiteral("valFu"));
        valFu->setGeometry(QRect(20, 150, 331, 20));
        valN = new QLabel(telaResp);
        valN->setObjectName(QStringLiteral("valN"));
        valN->setGeometry(QRect(310, 30, 46, 13));
        valH = new QLabel(telaResp);
        valH->setObjectName(QStringLiteral("valH"));
        valH->setGeometry(QRect(230, 30, 46, 13));
        escPreditor = new QLabel(telaResp);
        escPreditor->setObjectName(QStringLiteral("escPreditor"));
        escPreditor->setGeometry(QRect(150, 60, 101, 16));
        escMetodo = new QLabel(telaResp);
        escMetodo->setObjectName(QStringLiteral("escMetodo"));
        escMetodo->setGeometry(QRect(120, 100, 171, 16));

        retranslateUi(telaResp);

        QMetaObject::connectSlotsByName(telaResp);
    } // setupUi

    void retranslateUi(QDialog *telaResp)
    {
        telaResp->setWindowTitle(QApplication::translate("telaResp", "Dialog", 0));
        valX->setText(QApplication::translate("telaResp", "valorX", 0));
        valY->setText(QApplication::translate("telaResp", "valorY", 0));
        valFu->setText(QApplication::translate("telaResp", "Fun\303\247\303\243o", 0));
        valN->setText(QApplication::translate("telaResp", "valorN", 0));
        valH->setText(QApplication::translate("telaResp", "valorH", 0));
        escPreditor->setText(QApplication::translate("telaResp", "Escolha do Preditor", 0));
        escMetodo->setText(QApplication::translate("telaResp", "Posi\303\247\303\243o da escolha do metodo", 0));
    } // retranslateUi

};

namespace Ui {
    class telaResp: public Ui_telaResp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELARESP_H
