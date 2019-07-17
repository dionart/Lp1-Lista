#include "Pagamentos.h"

using namespace std;

Pagamentos::Pagamentos()
{
    valorPagamento = 0;
    nomeFuncionario = " ";
}

double Pagamentos::getValorPagamento()
{
    return valorPagamento;
}

string Pagamentos::getNomeFuncionario()
{
    return nomeFuncionario;
}

void Pagamentos::setValorPagamento(double valor)
{
    if(valor > 0)
        valorPagamento = valor;
    else
        valorPagamento = 0;
}

void Pagamentos::setNomeFuncionario(string nome)
{
    nomeFuncionario = nome;
}
    //dtor

