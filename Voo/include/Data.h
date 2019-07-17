#ifndef DATA_H
#define DATA_H_INCLUDED

#include <string>
#include <iostream>

class Data
{
    private:
        int dia, mes, ano;

    public:

        Data();
        virtual ~Data();
        Data(int d, int m, int a);

        int Compara(Data objeto);

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();

        std::string getMesExtenso();

        bool isBissexto(int year);

    protected:

};

#endif
