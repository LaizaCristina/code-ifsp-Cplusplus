#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int n = 0;
    int Np = 2;
    int P = 1;

    setlocale(LC_ALL,"");
    system("color 0F");

    while (n <=0)
    {
        cout <<" Digite o n�mero desejado: ";
        cin >> n;
    }
    //cout <<" \nN�meros menores que zero s�o inv�lidos.\n";
    //cout <<"Digite n�mero novamente:";
    //cin >> n;

    while (Np <= n)
    {
        if (n % Np == 0)
        {
            P++;
        }

        Np++;
    }

    if (P <= 2)
    {
        cout << "\nO n�mero � primo\n";
    }
    else
    {
        cout << "\nO n�mero n�o � primo";
    }
}
