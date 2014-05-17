#ifndef INTERFACETABELA_H
#define INTERFACETABELA_H

#include <QDialog>
#include <QtCore>
#include <QtGui>

namespace Ui {
class interfaceTabela;
}

class interfaceTabela : public QDialog
{
    Q_OBJECT

public:
    explicit interfaceTabela(QWidget *parent = 0);
    ~interfaceTabela();

public slots:

    void informacoesTabela(double x[],double y[],double h,double n);

    void setFun(QString &fun);

    void escolhaPreditor(bool esc);

    void escolhaMetodo(int pos);

private:
    Ui::interfaceTabela *ui;
    QStandardItemModel * model;
};

#endif // INTERFACETABELA_H
