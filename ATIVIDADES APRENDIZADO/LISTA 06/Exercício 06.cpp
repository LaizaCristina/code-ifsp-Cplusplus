#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    float n = 0;

    setlocale(LC_ALL,"");
    system("color 0F");

    cout << "Informe um n�mero: ";
    cin >> n;

    while (!(n >= 1 && n <=10))
    {
        cout << "\nO n�mero est� INCORRETO!\n" << endl;
        cout << "Informe n�mero novamente: ";
        cin >> n;
    }

    if (n >= 1 && n <=10)
    {
        cout << "\nN�mero est� DENTRO do intervalo de 1 a 10" << endl;
    }

}
