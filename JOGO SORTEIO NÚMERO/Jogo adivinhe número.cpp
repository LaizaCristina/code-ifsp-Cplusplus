#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int Numero = 0;
    int Jogador = 0;
    int Nivel = 0;
    setlocale(LC_ALL,"");
    system("color F1");

    srand(time(NULL));


    while (Nivel != 4)
    {

        cout << "Escolha um n�vel:\n\n";
        cout << "1 - F�cil\n\n";
        cout << "2 - Medio\n\n";
        cout << "3 - Dificil\n\n";
        cout << "4 - Sair\n\n";
        cin >> Nivel;



        switch (Nivel)
        {

        case 1:
        {
            Numero = rand() % 10 + 1;
            while (Numero != Jogador)
            {

                cout << "\n\nDigite um n�mero de 1 a 10: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um n�mero MENOR!\n";
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um n�mero MAIOR!\n";
                }
                else
                {
                    cout << "Parab�ns voc� acertou!\n";
                }

            }
            break;
        }


        case 2:
        {


            Numero = rand() % 50 + 1;
            while (Numero != Jogador)
            {



                cout << "\n\nDigite um n�mero de 1 a 50: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um n�mero MENOR!" << endl;
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um n�mero MAIOR!" << endl;
                }
                else
                {
                    cout << "Parab�ns voc� acertou!" << endl;
                }

            }
            break;
        }

        case 3:
        {


            Numero = rand() % 200 + 1;
            while (Numero != Jogador)
            {


                cout << "\n\nDigite um n�mero de 1 a 200: ";
                cin >> Jogador;

                if(Numero < Jogador)
                {
                    cout << "Pensei em um n�mero MENOR!" << endl;
                }
                else if (Numero > Jogador)
                {
                    cout << "Pensei em um n�mero MAIOR!" << endl;
                }
                else
                {
                    cout << "Parabens voc� acertou!" << endl;
                }

            }
            break;
        }
        case 4:
            cout << "Voc� saiu, tchau!\n\n";


        }
    }
}


