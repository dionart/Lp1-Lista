#include <iostream>
#include <stdio.h>
#include "Data.h"

using namespace std;

int main()
{
    int aux;

    Data d1 =  Data(15, 12, 2003);
    Data d2 =  Data(17, 3, 2003);
    Data d3 =  Data(3, 3, 2009);

    cout<<"teste: "<<d1.getDia()<<"/"<<d1.getMes()<<"/"<<d1.getAno()<<endl;
    cout<<"teste: "<<d2.getDia()<<"/"<<d2.getMes()<<"/"<<d2.getAno()<<endl;
    cout<<"teste: "<<d3.getDia()<<"/"<<d3.getMes()<<"/"<<d3.getAno()<<endl;

    if(d1.Compara(d2)== 0){
        cout<<"As datas sao iguais"<<endl;
    }else if(d1.Compara(d2)== 1){
        cout<<"A data corrente eh maior que o parametro"<<endl;
    }else if(d1.Compara(d2)== -1){
        cout<<"A data corrente eh menor que o parametro"<<endl;
    }

    if(d2.Compara(d3)== 0){
        cout<<"As datas sao iguais"<<endl;
    }else if(d2.Compara(d3)== 1){
        cout<<"A data corrente eh maior que o parametro"<<endl;
    }else if(d2.Compara(d3)== -1){
        cout<<"A data corrente eh menor que o parametro"<<endl;
    }

    if(d1.Compara(d3)== 0){
        cout<<"As datas sao iguais"<<endl;
    }else if(d1.Compara(d3)== 1){
        cout<<"A data corrente eh maior que o parametro"<<endl;
    }else if(d1.Compara(d3)== -1){
        cout<<"A data corrente eh menor que o parametro"<<endl;
    }

    cout<<d1.getMesExtenso()<<endl;
    cout<<d2.getMesExtenso()<<endl;
    cout<<d3.getMesExtenso()<<endl;

    if(d1.isBissexto(d1.getAno())){
        cout<<"Ano bissexto"<<endl;
    }else if(!d1.isBissexto(d1.getAno())){
        cout<<"Ano nao eh bissexto : "<<d1.getAno()<<endl;
    }

    if(d2.isBissexto(d2.getAno())){
        cout<<"Ano bissexto"<<endl;
    }else if(!d1.isBissexto(d1.getAno())){
        cout<<"Ano nao eh bissexto : "<<d2.getAno()<<endl;
    }

    if(d3.isBissexto(d3.getAno())){
        cout<<"Ano bissexto"<<endl;
    }else if(!d1.isBissexto(d1.getAno())){
        cout<<"Ano nao eh bissexto : "<<d3.getAno()<<endl;
    }

    return 0;
}
