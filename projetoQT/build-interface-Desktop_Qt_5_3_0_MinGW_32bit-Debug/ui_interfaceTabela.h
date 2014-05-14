/********************************************************************************
** Form generated from reading UI file 'interfaceTabela.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACETABELA_H
#define UI_INTERFACETABELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_interfaceTabela
{
public:
    QTableView *tableView;

    void setupUi(QDialog *interfaceTabela)
    {
        if (interfaceTabela->objectName().isEmpty())
            interfaceTabela->setObjectName(QStringLiteral("interfaceTabela"));
        interfaceTabela->resize(321, 294);
        tableView = new QTableView(interfaceTabela);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 321, 301));
        tableView->setAlternatingRowColors(true);

        retranslateUi(interfaceTabela);

        QMetaObject::connectSlotsByName(interfaceTabela);
    } // setupUi

    void retranslateUi(QDialog *interfaceTabela)
    {
        interfaceTabela->setWindowTitle(QApplication::translate("interfaceTabela", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class interfaceTabela: public Ui_interfaceTabela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACETABELA_H
