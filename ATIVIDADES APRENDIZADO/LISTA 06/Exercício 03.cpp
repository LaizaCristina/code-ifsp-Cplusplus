#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    double n = 0;
    int v = 1;
    int f = 0;
    double soma = 0;
    double m = 0;

    setlocale(LC_ALL,"");
    system("color 0F");


    cout << "Digite as notas do aluno:\n" << endl;

    do
    {
        cout << "Nota " << v << ": ";
        cin >> n;

        while (n < 0 || n > 10)
        {
            cout << "\nValor inv�lido, tente novamente!" << endl;

            cout << "Nota " << v << ": ";
            cin >> n;
        }

        soma = soma + n;
        v = v + 1;

        if (v <=4)
        {
              cout << "\nDigite pr�xima nota:" << endl;
        }

    } while (v <= 4);

    m =  soma / 4;

    cout << "\nM�dia: " << m << endl;
    cout << "\nDigite a frequ�ncia do aluno: ";
    cin >> f;

    if (f < 75)
    {
        cout << "Aluno REPROVADO, frequ�ncia menor do que 75%\n" << endl;
    }

    else
    {
        if (m < 4)
        {
            cout << "REPROVADO" << endl;
        }

        else if (m <= 5.9)
        {
            cout << "REAVALIA��O" << endl;
        }

        else if (m <=10)
        {
            cout << "APROVADO" << endl;
        }
    }
}






