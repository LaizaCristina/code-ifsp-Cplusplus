#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{


    int Numero = 0;
    int Soma = 0;

    setlocale(LC_ALL,"");
    system("color F1");

    for (Numero = 2; Numero <= 50; Numero = Numero + 2)
    {
        cout << Numero << "\n";
        Soma =  Numero + Soma;
    }
    cout << "A soma dos n�meros pares de 1 a 50 �: " << Soma << "\n" ;
    cout << "A m�dia dos n�meros �: " << Soma / 25;

    return 0;
}
