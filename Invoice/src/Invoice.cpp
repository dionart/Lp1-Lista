#include "Invoice.h"
#include <string>
#include <iostream>

using namespace std;

Invoice::Invoice(int num, int qtd, string descricao, double valor)
{
    setNum(num);
    setQtd(qtd);
    setDes(descricao);
    setVal(valor);

}

double Invoice::getInvoiceAmount()
{
    return qtd*valor;
}

int Invoice::getNum()
{
    return num;
}

string Invoice::getDes()
{
    return descricao;
}

int Invoice::getQtd()
{
    return qtd;
}

double Invoice::getVal()
{
    return valor;
}

void Invoice::setNum(int num)
{
    this->num=num;
}

void Invoice::setQtd(int qtd)
{
    if(qtd<0){
        this->qtd = 0;
    }else{
        this->qtd=qtd;
    }
}
void Invoice::setVal(double valor)
{
    if(valor<0){
        this->valor= 0.0;
    }else{
        this->valor=valor;
    }
}

void Invoice::setDes(string descricao)
{
    this->descricao=descricao;
}



