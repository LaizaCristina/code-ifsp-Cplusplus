#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()

{
    int idade = 0;
    int v = 1;
    int q = 0;
    int fe1 = 0;
    int fe2 = 0;
    int fe3 = 0;
    int fe4 = 0;
    int fe5 = 0;
    float p1 = 0;
    float p5 = 0;



    setlocale(LC_ALL,"");
    system("color 0F");



    cout << "Digite quantas idades c� qu�: ";
    cin >> q;
    cout << "Digite as " << q << " idades:\n" << endl;

    do
    {
        cout << "idade " << v << ": ";
        cin >> idade;

        while (idade < 0 || idade > 150)
        {
            cout << "\nValor inv�lido, tente novamente!" << endl;

            cout << "Idade " << v << ": ";
            cin >> idade;
        }

        v = v + 1;

        if (v <= q)
        {
            cout << "\nDigite pr�xima idade:" << endl;
        }


        if (idade <= 15 && idade > 0)
        {
            fe1 = fe1 + 1;
        }

        else if (idade >= 16 && idade <= 30)
        {
            fe2 = fe2 + 1;
        }

        else if (idade >= 31 && idade <= 45)
        {
            fe3 = fe3 + 1;
        }

        else if (idade >= 46 && idade <= 60)
        {
            fe4 = fe4 + 1;
        }

        else if (idade > 60)
        {
            fe5 = fe5 + 1;
        }

    }
    while (v <= q);

    cout << endl;

    cout << "  1� faixa et�ria - At� 15 anos: " << fe1 << endl;
    cout << "  2� faixa et�ria - De 16 at� 30 anos: " << fe2 << endl;
    cout << "  3� faixa et�ria - De 31 at� 45 anos: " << fe3 << endl;
    cout << "  4� faixa et�ria - De 46 at� 60 anos: " << fe4 << endl;
    cout << "  5� faixa et�ria - Acima de 60 anos: " << fe5 << endl;


    p1 = (fe1 * 100)/q;
    p5 = (fe5 * 100)/q;

    cout << endl;
    cout << "  Porcentagem de pessoas da 1� faixa et�ria: " << p1 << endl;
    cout << "  Porcentagem de pessoas da 5� faixa et�ria: " << p5 << endl;

}
