#include "Horario.h"

Horario::Horario()
{
    hora=minuto=segundo=0;
}

Horario::Horario(int hora, int minuto, int segundo)
{
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}

void Horario::setHorario(int hora, int minuto, int segundo)
{
    setHora(hora);
    setMinuto(minuto);
    setSegundo(segundo);
}

int Horario::getHora()
{
    return hora;
}

int Horario::getMinuto()
{
    return minuto;
}

int Horario::getSegundo()
{
    return segundo;
}

void Horario::setHora(int hora)
{
    if(hora>23 && hora << 1){
        this->hora = 0;
    }else{
        this->hora = hora;
    }
}

void Horario::setMinuto(int minuto)
{
    if(minuto>59 && minuto << 1){
        this->minuto = 0;
    }else{
        this->minuto = minuto;
    }

}

void Horario::setSegundo(int segundo)
{
    if(segundo>59 && segundo << 1){
        this->segundo = 0;
    }else{
        this->segundo = segundo;
    }

}

void Horario::AvancarHorario()
{
    if(segundo>=59){
        segundo = 0;
        minuto++;
    }else segundo++;

    if(minuto>=59){
        minuto=0;
        hora++;
    }
    if(hora>=23 && minuto>59){
        hora=0;
    }

}


Horario::~Horario()
{
    //dtor
}
