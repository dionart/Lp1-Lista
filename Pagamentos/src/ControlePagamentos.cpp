#include "ControlePagamentos.h"

ControlePagamentos::ControlePagamentos()
{
   for(int i = 0; i<150; i++){
        p[i].setValorPagamento(0);
        p[i].setNomeFuncionario(" ");
    }
}

void setPagamentos(string nomeFuncionario, double valorPagamento)
{
    int aux = VerificaIndiceDisponivel();

    p[aux].setNomeFuncionario(nomeFuncionario);
    p[aux].setValorPagamento(valorPagamento);
}

double calculaTotalDePagamentos()
{
    double soma = 0;

    for(int i = 0; i<150; i++){
        soma += p[i].getValorPagamento();
    }

    return soma;
}

bool existePagamentoParaFuncionario(string nomeFuncionario)
{
    for(int i = 0; i<150; i++){
        if(p[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int VerificaIndiceDisponivel()
{
    for(int i = 0; i<150; i++){
        if(p[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}

