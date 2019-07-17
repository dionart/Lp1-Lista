#include <iostream>
#include "Voo.h"


Voo::Voo()
{
    int i;

    Horario();
    Data();

    numVoo = 1;
    for(i = 0; i < 100; i++){
        numVagas[i] = false;
    }

}

Voo::Voo(int numVoo, bool numVagas[100], Data dataVoo, Horario horaVoo)
{
    int i;
    this -> numVoo = numVoo;

    for(i = 0; i < 100; i++){
        this -> numVagas[i] = numVagas[i];
    }
    this -> dataVoo = dataVoo;
    this -> horaVoo = horaVoo;

}

int Voo::proximoLivre()
{
    int i;

    for(i = 0; i < 100; i++){
        if(numVagas[i] == false){
            return i;
        }
    }
    return 0;
}

bool Voo::Verifica(int cadeira)
{
    if(numVagas[cadeira] == false)
        return true;
    else
        return false;

}

bool Voo::Ocupa(int cadeira)
{
    if(Verifica(cadeira)== 1){
        numVagas[cadeira] = true;
        return true;
    }
    else{
        return false;
    }
}

int Voo::vagas()
{
    int i,cont = 0;

    for(i = 0; i < 100; i++){
        if(numVagas[i] == false){
            cont++;
        }
    }
}

int Voo::getNumVoo()
{
    return numVoo;
}

Data Voo::getData()
{
    return dataVoo;
}

Horario Voo::getHorario()
{
    return horaVoo;
}

Voo::~Voo()
{
    //dtor
}
