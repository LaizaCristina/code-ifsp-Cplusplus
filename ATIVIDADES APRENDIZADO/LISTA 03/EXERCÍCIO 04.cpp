#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    int n=0;

    setlocale(LC_ALL,"");
    system("color F1");




    cout << "Informe um n�mero de 1 a 3:";
    cin >> n;

    if (n==1)
    {
        cout << "Idioma Portugu�s - Ol� Mundo!";
    }

    else if (n==2)
    {
        cout << "Idioma Ingl�s - Hello World!";
    }

    else if (n==3)
    {
        cout << "Idioma Franc�s - Bonjour tout le monde!";
    }

    else
    {
        cout << "N�o foi poss�vel realizar tarefa";
    }
}
