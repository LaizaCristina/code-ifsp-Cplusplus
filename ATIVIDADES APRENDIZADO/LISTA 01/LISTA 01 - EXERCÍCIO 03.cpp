#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    system("color F1");

    float p1=0;
    float d=0;

    cout << "Pre�o 1: ";
    cin >> p1;

    cout << "Desconto: ";
    cin >> d;

    cout << "Novo pre�o:" << p1 - (p1 * d/100)<<endl;
}
