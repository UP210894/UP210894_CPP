/*
Date: 26/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Calculate income tax
-----Problem-----
The tax brackets for the income statement of a certain country are the following:
   Rent                           |   Tax
   Less than $ 10, 000            |   5%
   Come in $ 10,000 and $20,000   |   15%
   Come in $ 12,000 and $35,000   |   20%
   Come in $ 35,000 and $65,000   |   30%
   More of $ 60,000               |   45%


Write a program that asks the user for their annual income and shows the corresponding
tax on the screen
*/

// Preprocessor directives
#include <iostream>

using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    float rent;
    float tax;
    float total;
    float totaltax;

    // Request rent to the user
    cout << "Enter your annual income:" << endl;
    cin >> rent;

    // Assign with "if" the percentage of tax depending on the annual income
    if (rent >= 0 && rent < 10000)
    {
        tax = .05;
    }
    else if (rent >= 10000 && rent < 20000)
    {
        tax = .15;
    }
    else if (rent >= 20000 && rent < 35000)
    {
        tax = .20;
    }
    else if (rent >= 35000 && rent < 60000)
    {
        tax = .30;
    }
    else if (rent >= 60000)
    {
        tax = .45;
    }
    else
    {
        cout << "Invalid rent" << endl;
    }

    // "If" to determine when to display the results
    if (rent >= 0)
    {
        // Print the results
        cout << "Your tax will be a percentage of " << (tax * 100) << "%" << endl;
        cout << "Your tax will be $" << rent * tax << endl;
    }

    // Return 0 means that teh program ends succesfully
    return 0;
}