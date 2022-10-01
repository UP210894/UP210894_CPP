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
    int whole = 1;
    float floating = 1.23456789;
    double great = 1.23456789;
    char character = 'a';
    // Prints on screen a text
    cout << "Intanger: " << whole << endl;
    cout << "Size of intanger is: " << sizeof(whole) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Floating: " << floating << endl;
    cout << "Size of floating is: " << sizeof(floating) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Double: " << great << endl;
    cout << "Size of double  is: " << sizeof(great) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Char: " << character << endl;
    cout << "Size of char is: " << sizeof(character) << " bytes" << endl;
    cout << "=================" << endl;

    // Prints on screen a text with printf
    printf("Intanger: %i \n", whole);
    printf("Floating: %3.1f \n", floating);

    // Return 0 means that teh program ends succesfully
    return 0;
}
