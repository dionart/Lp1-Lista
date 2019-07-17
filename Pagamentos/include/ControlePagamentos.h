#ifndef CONTROLEPAGAMENTOS_H
#define CONTROLEPAGAMENTOS_H
#include <iostream>
#include "Pagamentos.h"

using namespace std;
class ControlePagamentos
{
    private:
        pagamentos p[150];

    public:
        ControlePagamento();
        void setPagamentos(string nomeFuncionario, double valorPagamento);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario (string nomeFuncionario);
        int VerificaIndiceDisponivel();
};

#endif // CONTROLEPAGAMENTOS_H
