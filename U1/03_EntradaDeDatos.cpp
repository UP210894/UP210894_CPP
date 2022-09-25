/*
Date: 20/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Entrada de datos
*/
// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int entero;
    float flotante;
    double grande;
    char caracter;

    // Enter and print text on the screen
    cout << "Ingresa un dato entero: ";
    cin >> entero;
    cout << "El dato es: " << entero << endl;
    cout << "Tamaño del dato entero es : " << sizeof(entero) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Ingresa un dato flotante: ";
    cin >> flotante;
    cout << "El dato es: " << flotante << endl;
    cout << "Tamaño del dato flotante es : " << sizeof(flotante) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Ingresa un dato double: ";
    cin >> grande;
    cout << "El dato es: " << grande << endl;
    cout << "Tamaño del dato double es : " << sizeof(double) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Ingresa un dato char: ";
    cin >> caracter;
    cout << "El dato es: " << caracter << endl;
    cout << "Tamaño del dato char es : " << sizeof(caracter) << " bytes" << endl;
    cout << "=================" << endl;

    // Return 0 means that teh program ends succesfully
    return 0;
}