/*Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Calcula el impositovo de una rent
*/
#include <iostream>
using namespace std;

int main()
{
    // Declaracion de variables
    float rent;
    float tax;
    float total;
    float totaltax;

    // Soliciar renta al usuario
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

    return 0;
}