#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{

    int i = 0;
    int s = 0;

    setlocale(LC_ALL,"");
    system("color 0F");

    cout << "Para saber se voc� pode participar do programa informe os dados solicitados:" << endl;
    cout << "Obs: Idade e sal�rio devem ser maiores que 0 (zero)!\n" << endl;

    cout << "Idade: ";
    cin >> i;

    cout << "Sal�rio: ";
    cin >> s;
    cout << endl;

    while (i < 0 || s < 0)
    {
        cout << "Idade e Sal�rio devem ser maiores que 0 (zero)!" << endl;
        cout << "Idade: ";
        cin >> i;

        cout << "Sal�rio:";
        cin >> s;
        cout << endl;
    }

    if (i >= 18 && s <=800)
    {
        cout << "Voc� pode participar!!" << endl;
    }

    else
    {
        cout << "Voc� N�O pode participar!" << endl;
    }

}
