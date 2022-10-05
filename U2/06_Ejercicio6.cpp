/*
Date: 05/10/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Cycle "Do While" to calculate the total amount of the bill
-----Problem-----
Make a program that reads indefinitely quantities of products and their price, and at the end
indicates the total of the invoice. To know that the purchase has been completed, a 0 must be 
entered in the quantily.
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int products;
    float price, invoice;

    cout << "Enter the number of items you want along with your price" << endl;
    cout << "If you no longe want to enter more articles, enter 0" << endl;

    // Cycle "Do While" to aks the number of products to enter and the individual price of each product
    do
    {
        cout << "Quantity of products: " << endl;
        cin >> products;
        cout << "Individual product price: $" << endl;
        cin >> price;

        invoice += (products * price);
    } while (products != 0 || price != 0);

    // Print the results
    cout << "The total to be billed si: $" << invoice << endl;

    // Return 0 means that the program ends succesfully
    return 0;
}