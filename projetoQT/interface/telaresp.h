#ifndef TELARESP_H
#define TELARESP_H

#include <QDialog>

namespace Ui {
class telaResp;
}

class telaResp : public QDialog
{
    Q_OBJECT

public:
    explicit telaResp(QWidget *parent = 0);
    ~telaResp();

public slots:

    void valorEscolidos(double x,double y,double h,double n);

    void setFun(QString &fun);

    void escolhaPreditor(bool esc);

    void escolhaMetodo(int pos);

private:
    Ui::telaResp *ui;
};

#endif // TELARESP_H
