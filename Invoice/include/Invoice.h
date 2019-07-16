#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>

using namespace std;

class Invoice
{
    public:

        Invoice(int num, int qtd, string descricao, double valor);

        int getNum();
        string getDes();
        int getQtd();
        double getVal();
        double getInvoiceAmount();
        void setNum(int num);
        void setQtd(int qtd);
        void setDes(string descricao);
        void setVal(double valor);


    protected:

    private:
        int num;
        int qtd;
        string descricao;
        double valor;
};

#endif // INVOICE_H
