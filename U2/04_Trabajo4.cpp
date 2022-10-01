/*
Date: 29/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Determinar the cost of entry
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int vegetariana, extra;
    string extras, ingredientes;

    // Ask if the pizza would be vegetarian
    cout << "Su pizza seria vegetariana" << endl;
    cout << "1.- Si" << endl;
    cout << "2.- No" << endl;
    cin >> vegetariana;

    // "If" is used to determine what type of menu to show you
    if (vegetariana == 1)
    {
        ingredientes = "si";
        cout << "Ingrediente extra para su pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Pimiento" << endl;
        cout << "2.- Atun" << endl;
        cin >> extra;
        if (extra = 1)
        {
            extras = "pimienta";
        }
        else if (extra == 2)
        {
            extras = "atun";
        }
        else
        {
            cout << "Eliga una opcion valida" << endl;
        }
    }
    else if (vegetariana == 2)
    {
        ingredientes = "no";
        cout << "Ingrediente extra para su pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Peperoni" << endl;
        cout << "2.- Jamon" << endl;
        cout << "3.- Salmon" << endl;
        cin >> extra;
        if (extra == 1)
        {
            extras = "peperoni";
        }
        else if (extra == 2)
        {
            extras = "jamon";
        }
        else if (extra == 3)
        {
            extras = "salmon";
        }
        else
        {
            cout << "Eliga una opcion valida" << endl;
        }
    }
    else
    {
        cout << "Eliga una opcion valida" << endl;
    }
    cout << "Su pizza " << ingredientes << " es vegetariana con mozzarella, tomate y " << extras;

    // Return 0 means that the program ends succesfully
    return 0;
}
