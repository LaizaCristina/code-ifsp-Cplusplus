
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

int main()
{

    float n1 = 0;
    float n2 = 0;


    setlocale(LC_ALL,"");
    system("color F1");


    cout << "Digite primeiro n�mero: ";
    cin >> n1;


    cout << "Digite segundo n�mero: ";
    cin >> n2;
    cout << endl;


    if (n1 < 0 || n2 <0)
    {
        cout << "Valor inv�lido, apenas n�meros positivos!" << endl;
    }

    else
    {
        if (n1 < n2)
        {
            cout << n1 << " � menor.\n";

        }
        else
        {
            cout << n2 << " � menor.\n";
        }
    }

}
