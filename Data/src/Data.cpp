#include "Data.h"
#include <string.h>

using namespace std;
Data::Data()
{

}

Data::~Data()
{
    //dtor
}

Data::Data(int d, int m, int a)
{
    setDia(d);
    setMes(m);
    setAno(a);

}

int Data::Compara(Data objeto)
{
    if(this->ano == objeto.ano && this->mes == objeto.mes && this->dia == objeto.dia){
        return 0;
    }else if(this->ano==objeto.ano){
        if(this->mes==objeto.mes){
            return this->dia > objeto.dia ? 1 : -1;
        }else{
            return this->mes > objeto.mes ? 1 : -1;
        }
    }else{
        return this->ano > objeto.ano ? 1 : -1;
    }
}

void Data::setDia(int dia)
{
    if(dia<1 || dia>31){
        this->dia = 1;
    }else{
        this->dia = dia;
    }
}

void Data::setMes(int mes)
{
    if(mes<1 || mes>12){
        this->mes = 1;

    }else{
        this->mes = mes;
    }
}

void Data::setAno(int ano)
{
    if(ano<0 || ano>2019){
        this->ano =1;

    }else{
        this->ano = ano;
    }
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

string Data::getMesExtenso()
{
    if(mes == 1 ){
        return "Janeiro";
    }else if(mes ==2 ) {
        return "Fevereiro";
    }else if(mes ==3 ) {
        return "Marco";
    }else if(mes ==4 ) {
        return "Abril";
    }else if(mes ==5 ) {
        return "Maio";
    }else if(mes ==6 ) {
        return "Junho";
    }else if(mes ==7 ) {
        return "Julho";
    }else if(mes ==8 ) {
        return "Agosto";
    }else if(mes ==9 ) {
        return "Setembro";
    }else if(mes ==10 ){
         return "Outubro";
    }else if(mes ==11 ){
        return "Novembro";
    }else if(mes==12) {
        return "Dezembro";
    }
}

bool Data::isBissexto(int year)
{
    if (ano % 400 == 0) {
		return true;
	}
	else if ((ano % 4 == 0) && (ano % 100 != 0)) {
		return true;
	}
	else {
		return false;
	}
}
