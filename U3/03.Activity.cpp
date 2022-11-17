/*
Date: 27/10/2022
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description:
-----Problem-----

*/

// Preprocessor directives
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

void getCambio(int money);
void imprimir(int money);

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;
int denominaciones[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int cambios[9] = {0};

//-----------MAIN FUNTION---------
int main()
{
    int mont;
    cout << "Enter the mont: " << endl;
    cin >> mont;
    getCambio(mont);
    imprimir(mont);

    return 0;
}

void getCambio(int money)
{

    for (int incremento = 0; incremento < 9; incremento++)
    {
        cambios[incremento] = money / denominaciones[incremento];
        money %= denominaciones[incremento];
    }
}
void imprimir(int money)
{

    cout << "Cambio de " << money << endl;
    for (int incremento = 0; incremento < 9; incremento++)
    {
        cout << denominaciones[incremento] << "\t" << cambios[incremento] << endl;
    }
}
