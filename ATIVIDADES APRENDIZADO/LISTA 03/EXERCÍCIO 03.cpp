#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{



    setlocale(LC_ALL,"");
    system("color F1");


    int n=0;


    cout << "N�mero dia da semana:";
    cin >> n;

    if (n==1)
    {
        cout << "Domingo.";
    }

   else if (n==2)
    {
        cout << "Segunda-feira.";
    }

     else if (n==3)
    {
        cout << "Ter�a-feira.";
    }

     else if (n==4)
    {
        cout << "Quarta-feira.";
    }

     else if (n==5)
    {
        cout << "Quinta-feira.";
    }

     else if (n==6)
    {
        cout << "Sexta-feira.";
    }

     else if (n==7)
    {
        cout << "S�bado.";
    }

    else
    {
        cout << "N�o existe esse dia na semana.";
    }

}


