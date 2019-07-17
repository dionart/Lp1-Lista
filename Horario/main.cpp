#include <iostream>
#include "Horario.h"

using namespace std;

int main()
{
    Horario h1 = Horario();
    Horario h2 = Horario(13 , 32, 43);

    cout<<"horario h1 :"<< h1.getHora()<<":"<<h1.getMinuto()<<":"<<h1.getSegundo()<<endl;
    cout<<"horario h2 :"<< h2.getHora()<<":"<<h2.getMinuto()<<":"<<h2.getSegundo()<<endl;
    cout<<endl;

    h2.AvancarHorario();

    cout<<"horario h2 :"<< h2.getHora()<<":"<<h2.getMinuto()<<":"<<h2.getSegundo()<<endl;
    cout<<endl;

    h1.setHora(23);
    h1.setMinuto(30);
    h1.setSegundo(59);

    cout<<"horario h1 :"<< h1.getHora()<<":"<<h1.getMinuto()<<":"<<h1.getSegundo()<<endl;

    cout<<endl;

    h1.AvancarHorario();
    cout<<"horario h1 :"<< h1.getHora()<<":"<<h1.getMinuto()<<":"<<h1.getSegundo()<<endl;

    return 0;
}
