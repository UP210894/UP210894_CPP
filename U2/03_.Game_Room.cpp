/*
Date: 28/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Determinar the cost of entry
-----Problem-----
Write a program for a company that has game rooms for all ages and
You want to automatically calculate the price you should charge your customers for entering. The
The program must ask the user for the customer's age and display the price of the ticket. Yes
the client is under 4 years old can enter for free, if he is between 4 and 18 years old he must pay $5 and
if you are over 18, $10
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

    // "If" to show the final cost message only when a valid age has been entered
    if (date >= 0)
    {
        // Print the results
        cout << "Its entry cost $" << cost << endl;
    }

    // Return 0 means that the program ends succesfully
    return 0;
}
