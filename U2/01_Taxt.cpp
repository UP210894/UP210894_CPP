/*Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Calculate income tax
*/

// Input/Output LIbrary between the screet "n" keyboard
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
    if (rent < 10000)
    {
        tax = .5;
    }
    if (rent >= 10000 && rent < 20000)
    {
        tax = .15;
    }
    if (rent >= 20000 && rent < 35000)
    {
        tax = .20;
    }
    if (rent >= 35000 && rent < 60000)
    {
        tax = .30;
    }
    if (rent >= 60000)
    {
        tax = .45;
    }

    totaltax = rent * tax;
    total = rent + totaltax;

    // Screen output
    cout << "Your tax will be a percentage of " << (tax * 100) << "%" << endl;
    cout << "Your tax will be $" << totaltax << endl;
    cout << "Your total will be $" << total;

    // Return 0 means that teh program ends succesfully
    return 0;
}