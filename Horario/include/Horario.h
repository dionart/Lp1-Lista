#ifndef HORARIO_H
#define HORARIO_H


class Horario
{
    public:
        Horario();
        virtual ~Horario();

        Horario(int hora,int minuto, int segundo);
        void setHorario(int hora, int minuto, int segundo);
        int getHora();
        int getMinuto();
        int getSegundo();
        void setHora(int hora);
        void setMinuto(int minuto);
        void setSegundo(int segundo);

        void AvancarHorario();


    protected:

    private:
        int hora, minuto, segundo;
};

#endif // HORARIO_H
