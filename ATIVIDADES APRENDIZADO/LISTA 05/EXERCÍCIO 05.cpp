#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    int s = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite Sal�rio: ";
    cin >> s;
    cout << endl;

    if (s < 0)
    {
        cout << "Valor inv�lido" << endl;
    }

    else
    {
        if (s <= 1200.00)
        {
            cout << "Aumento de sal�rio em 15%: " << s + (s*0.15) << endl << endl;
        }

        else
        {
            cout <<"Aumento de sal�rio em 10%: " << s + (s*0.10) << endl << endl;
        }
    }

}
