

#include <iostream>
using namespace std;

int main()
{
    int eineVariable = 100;
    int *AdresseDerVariable = &eineVariable;
    AdresseDerVariable = &eineVariable;
   
    cout << "Variable = " << eineVariable << endl;
    cout << "An der Adresse der Variable steht " << *AdresseDerVariable << endl;

    cout << "Adresse eineVariable = " << AdresseDerVariable << endl;
    cout << "Adresse AdresseDerVariable =" << &AdresseDerVariable << endl;

    int& ReferenzEineVariable = eineVariable;
    ReferenzEineVariable += 20;

    cout << "ReferenzEineVariable = " << ReferenzEineVariable << endl;
    cout << "eineVariable = " << eineVariable << endl;
     
    cout << "Adresse ReferenzeineVariable = " << &ReferenzEineVariable << endl;
    cout << "Adresse eineVariable = " << &eineVariable << endl;
}

