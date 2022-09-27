/*
Date: 20/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Data entry
*/
// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int whole;
    float floating;
    double great;
    char character;

    // Enter and print text on the screen
    cout << "Enter an integer whole: ";
    cin >> whole;
    cout << "The data is: " << whole << endl;
    cout << "Integer data size whole is: " << sizeof(whole) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Enter an integer floating: ";
    cin >>
        floating;
    cout << "The data is: " << floating
         << endl;
    cout << "Integer data size floatinges: " << sizeof(floating) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Enter an integer great: ";
    cin >> great;
    cout << "The data is: " << great << endl;
    cout << "Integer data size double  is: " << sizeof(double) << " bytes" << endl;
    cout << "=================" << endl;

    cout << "Enter an integer char: ";
    cin >> character;
    cout << "The data is: " << character << endl;
    cout << "Integer data size char es : " << sizeof(character) << " bytes" << endl;
    cout << "=================" << endl;

    // Return 0 means that teh program ends succesfully
    return 0;
}