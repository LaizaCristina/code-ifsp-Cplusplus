#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{
    int iOpcao = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "1- Janeiro         7- Julho" << endl;
    cout << "2- Fevereiro       8- Agosto" << endl;
    cout << "3- Mar�o           9- Setembro" << endl;
    cout << "4- Abril           10- Outubro" << endl;
    cout << "5- Maio            11- Novembro" << endl;
    cout << "6- Junho           12- Dezembro" << endl;

    cout << endl;
    cout << "Op��o: ";
    cin >> iOpcao;
    cout << endl;

    switch(iOpcao)
    {
    case 1:
    {
        cout << "M�s de Janeiro:" << endl;
        break;
    }
    case 2:
    {
        cout << "M�s de Fevereiro:" << endl;
        break;
    }
    case 3:
    {
        cout << "M�s de Mar�o:" << endl;
        break;
    }
    case 4:
    {
        cout << "M�s de Abril:" << endl;
        break;
    }

    case 5:
    {
        cout << "M�s de Maio:" << endl;
        break;
    }

    case 6:
    {
        cout << "M�s de Junho:" << endl;
        break;
    }

    case 7:
    {
        cout << "M�s de Julho:" << endl;
        break;
    }

    case 8:
    {
        cout << "M�s de Agosto:" << endl;
        break;
    }

    case 9:
    {
        cout << "M�s de Setembro:" << endl;
        break;
    }

    case 10:
    {
        cout << "M�s de Outubro:" << endl;
        break;
    }

    case 11:
    {
        cout << "M�s de Novembro:" << endl;
        break;
    }

    case 12:
    {
        cout << "M�s de Dezembro:" << endl;
        break;
    }
    default:
        cout << "Op��o Inv�lida" << endl;
    }
}

