#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H
#include <iostream>

using namespace std;

class Pagamentos
{
    private:
        double valorPagamento;
        string nomeFuncionario;
    public:
        pagamentos();
        double getValorPagamento();
        string getNomeFuncionario();
        void setValorPagamento(double valor);
        void setNomeFuncionario(string nome);
};

#endif // PAGAMENTOS_H
