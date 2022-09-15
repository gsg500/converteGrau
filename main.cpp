#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int celsius;
    cout << "Digite a temperatura em celsius:";
    cin >> celsius;

    int fator = 212 - 32;
    int fahrenheit = fator * celsius/100 + 32;

    cout << "Valor em fahrenheit:";
    cout << fahrenheit << endl;
    cout << "Pressione enter para continuar" << endl;

    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
