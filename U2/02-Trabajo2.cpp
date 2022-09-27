/*
Date: 26/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Get employee bonus
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    double qualification;

    // Request a rating from the user
    cout << "Write your rating" << endl;
    cin >> qualification;

    // Determine with "yes" the amount of money that each employee will receive
    if ((qualification == 0) || (qualification == 0.4) || (qualification >= 0.6 && qualification <= 1))
    {
        if (qualification == 0)
        {
            cout << "His performance is unacceptable" << endl;
        }
        else if (qualification == 0.4)
        {
            cout << "His performance is acceptable" << endl;
        }
        else if (qualification >= 0.6 && qualification <= 1)
        {
            cout << "His performance is commendable" << endl;
        }
        cout << "Your bonus is $" << 2400 * qualification << endl;
    }

    // In case an incorrect qualification is typed, it will show you a message
    else
    {
        cout << "Rating not accepted" << endl;
    }

    // Return 0 means that teh program ends succesfully
    return 0;
}