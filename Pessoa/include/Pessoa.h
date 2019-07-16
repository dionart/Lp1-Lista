#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string nome);
        Pessoa(string nome , string telefone, int age);

        string getNome();
        string getTel();
        int getAge();
        void setNome(string nome);
        void setTel(string tel);
        void setAge(int age);

    protected:

    private:
        string nome;
        string telefone;
        int age;
};

#endif // PESSOA_H
