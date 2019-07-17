#include <iostream>
#include "Pagamentos.h"
#include "ControlePagamentos.h"

using namespace std;

int main()
{
    ControlePagamentos c1 = ControlePagamentos();
    c1.setPagamentos("Samuel Laerte", 910);
    c1.setPagamentos("Arthur Ruan", 1000);
    c1.setPagamentos("Thiago Andres", 1500);
    cout << "Total pago: " << c1.calculaTotalDePagamentos() << endl;
    if(c1.existePagamentoParaFuncionario("Victor Gorgonho"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;
    if(c1.existePagamentoParaFuncionario("Arthur Dionizio"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;
}
