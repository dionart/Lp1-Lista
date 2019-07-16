#include "Pessoa.h"
#include <iostream>
#include <string>

    Pessoa::Pessoa()
    {
        nome = "\0";
        age = 0;
        telefone = "Sem numero";
    }

    Pessoa::Pessoa(string nome)
    {
        setNome(nome);
    }

    Pessoa::Pessoa(string nome, string telefone, int age)
    {
        setNome(nome);
        setAge(age);
        setTel(telefone);
    }

    string Pessoa::getNome()
    {
        return nome;
    }

    string Pessoa::getTel()
    {
        return telefone;
    }

    int Pessoa::getAge()
    {
        return age;
    }

    void Pessoa::setNome(string nome)
    {
        this->nome = nome;
    }

    void Pessoa::setTel(string tel)
    {
        telefone=tel;
    }

    void Pessoa::setAge(int age)
    {
        if(age<1){
            cout<<"Idade invalida: "<<age<<endl;
            this->age = 1;
        }else{
            this->age = age;
        }
    }



