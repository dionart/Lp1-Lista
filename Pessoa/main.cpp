#include <iostream>
#include "Pessoa.h"
#include <iostream>

using namespace std;

int main()
{
    Pessoa p1= Pessoa("Franklin" , "98804521" , 19);
    Pessoa p2= Pessoa("Arthur Dionizio", "66657740", 18);
    Pessoa p3= Pessoa("Fulano de tal", "969690088", 15);

    cout << "p1: " << p1.getNome() <<" / "<< p1.getAge() <<" / "<<p1.getTel() << endl;
    cout << "p2: " << p2.getNome() <<" / "<< p2.getAge() <<" / "<< p2.getTel() << endl;
    cout << "p3: " << p3.getNome() <<" / "<< p3.getAge() <<" / "<< p3.getTel() << endl;

    cout<<endl;
    p1.setAge(25);
    p1.setNome("Sam Laerte");
    p1.setTel("99999999");

    p2.setAge(-2);
    p2.setNome("Sicrano de fulano");
    p2.setTel("1111111");

    cout << "p1: " << p1.getNome() <<" / "<< p1.getAge() <<" / "<< p1.getTel() << endl;
    cout << "p2: " << p2.getNome() <<" / "<< p2.getAge() <<" / "<< p2.getTel() << endl;

    return 0;
}
