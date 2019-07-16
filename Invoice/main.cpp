#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main()
{
    Invoice t1 = Invoice(2, 3, "Item aleatorio", 300);

    cout<<"teste : "<<t1.getNum()<<"/"<<t1.getQtd()<<"/"<<t1.getDes()<<"/"<<t1.getVal()<<endl;

    cout<<"Total : "<<t1.getInvoiceAmount()<<endl;
    cout<<endl;

    t1.setNum(25);
    t1.setQtd(5);
    t1.setDes("Alo");
    t1.setVal(5);

    cout<<"teste : "<<t1.getNum()<<"/"<<t1.getQtd()<<"/"<<t1.getDes()<<"/"<<t1.getVal()<<endl;
    cout<<"Total : "<<t1.getInvoiceAmount()<<endl;

    return 0;
}
