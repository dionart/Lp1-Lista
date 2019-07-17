#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

class Voo
{
    private:
        int numVoo;
        bool numVagas[100];
        Data dataVoo;
        Horario horaVoo;

    public:
        Voo();
        virtual ~Voo();
        Voo(int numVoo, bool numVagas[100], Data dataVoo, Horario horaVoo);

        int proximoLivre();
        bool Verifica(int cadeira);
        bool Ocupa(int cadeira);
        int vagas();
        int getNumVoo();
        Data getData();
        Horario getHorario();


    protected:

};

#endif // VOO_H
