/*
Date: 15/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Tipo de datos
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>
#include <stdio.h>
// Namespace avoid using std:: on all input and output
using namespace std;
//-----------MAIN FUNTION--------
int main()
{
    // Declaration of variables
    int entero = 1;
    float flotante = 1.23456789;
    double grande = 1.23456789;
    char caracter = 'a';
    // Prints on screen a text
    cout << "Entero: " << entero << endl;
    cout << "Tamaño del entero es: " << sizeof(entero) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Flotante: " << flotante << endl;
    cout << "Tamaño del flotante es: " << sizeof(flotante) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Double: " << grande << endl;
    cout << "Tamaño del double es: " << sizeof(grande) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Char: " << caracter << endl;
    cout << "Tamaño del char es: " << sizeof(caracter) << " bytes" << endl;
    cout << "=================" << endl;

    // Prints on screen a text with printf
    printf("Entero: %i \n", entero);
    printf("Flotante: %3.1f \n", flotante);

    // Return 0 means that teh program ends succesfully
    return 0;
}
