#include <iostream>
#include "Voo.h"

using namespace std;

int main()
{
    Voo v1 = Voo();

    cout << "Voo v1 \nNumero do voo: " << v1.getNumVoo() << "\nData: " << v1.getData().getAno() << "/" << v1.getData().getMes()<< "/" << v1.getData().getDia()
         << "\nHoras: " << v1.getHorario().getHora() << ":" << v1.getHorario().getMinuto() << ":" << v1.getHorario().getSegundo() << endl;

    cout << "Resultado proximo livre " << v1.proximoLivre() + 1 << endl;


    if(v1.Verifica(5)){
        cout<<"Resultado verificar: Cadeira disponivel"<<endl;
    }else{
        cout<<"Resultado verificar: Cadeira indisponivel"<<endl;
    }


    if(v1.Ocupa(9)){
        cout<<"Resultado ocupa: Cadeira ocupada com sucesso"<<endl;
    }else{
        cout<<"Resultado ocupa: Nao foi possivel ocupar a cadeira"<<endl;
    }

    //cout<<"Vagas disponiveis: "<<v1.numVagas<<endl;

    cout<<"Data: "<<v1.getData().getDia()<<"/"<<v1.getData().getMes()<<"/"<<v1.getData().getAno()<<endl;
    cout<<"Horario: "<<v1.getHorario().getHora()<<":"<<v1.getHorario().getMinuto()<<":"<<v1.getHorario().getSegundo()<<endl;


    return 0;
}
