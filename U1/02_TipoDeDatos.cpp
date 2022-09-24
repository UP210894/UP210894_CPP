/*
Date: 12/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Mi primer porgrama en C++
*/
#include <iostream>
using namespace std;

int main()
{
    int entero = 1;
    float flotante = 1.23456789;
    double grande = 1.23456789;
    char caracter = 'a';

    cout << "Entero: " << entero << endl;
    cout << "Tamaño del entero es: " << sizeof(entero) << "bytes" << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Tamaño del flotante es: " << sizeof(flotante) << "bytes" << endl;
    cout << "Double: " << grande << endl;
    cout << "Tamaño del double es: " << sizeof(grande) << "bytes" << endl;
    cout << "Char: " << caracter << endl;
    cout << "Tamaño del char es: " << sizeof(caracter) << "bytes" << endl;

    return 0;
}
