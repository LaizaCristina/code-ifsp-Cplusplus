#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    float n1 = 0;
    float n2 = 0;
    float m = 0;

    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Nota 01: ";
    cin >> n1;

    cout << "Nota 02: ";
    cin >> n2;
    cout << endl;


    m = (n1+n2)/2;

    if ((n1 < 0 || n1 > 10) || (n2 < 0 || n2 > 10))
    {
        cout << "Nota inv�lida, apenas n�meros positivos!" << endl;
    }

    else
    {

        cout << "M�dia: ";
        cout << m << endl << endl;

        if (m <= 2.9)
        {
            cout << "Situa��o: Reprovado\n";
        }

        else if (m <= 6.9)
        {
            cout << "Situa��o: Exame\n";
        }

        else
        {
            cout << "Situa��o: Aprovado\n";
        }

    }


}

