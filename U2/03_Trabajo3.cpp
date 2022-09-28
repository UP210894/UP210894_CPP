/*
Date: 28/09/2022
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
    int date;
    int cost;

    // Request the age of the user
    cout << "Enter your age: " << endl;
    cin >> date;
    // Determine with an "if" the cost of the entrance
    if (date >= 0 && date < 4)
    {
        cost = 0;
    }
    else if (date >= 4 && date <= 18)
    {
        cost = 5;
    }
    else if (date > 18)
    {
        cost = 10;
    }

    // If age is not valid, you will enter the "else" and show you the following message
    else
    {
        cout << "Enter a valid age" << endl;
    }
    // Show the final cost
    cout << "Its entry cost $" << cost << endl;

    // Return 0 means that the program ends succesfully
    return 0;
}
