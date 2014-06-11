#ifndef INTERFACE_H
#define INTERFACE_H

#include <QMainWindow>


namespace Ui {
class Interface;
}

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    explicit Interface(QWidget *parent = 0);
    ~Interface();

private slots:

    void on_botaoSair_clicked();

    void on_valorX_valueChanged(double x);

    void on_botaoCalcular_clicked();

    void on_valorY_valueChanged(double y);

    void on_valorH_valueChanged(double h);

    void on_valorN_valueChanged(double n);

    void on_funcao_textEdited(const QString &arg1);

    void on_checkPreditor_clicked();

    void on_comboMetodo_activated(int index);

    void on_actionSair_triggered();

    void on_actionQuem_Somos_triggered();

    void on_actionFun_o_triggered();

public:

private:
    Ui::Interface *ui;
};



#endif // INTERFACE_H
