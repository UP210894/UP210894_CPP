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
    float price, invoice = 0;

    cout << "Enter the number of items you want along with your price" << endl;
    cout << "If you no longe want to enter more articles, enter 0" << endl;

    /*
    "Do while" cycle to enter the number of products to be purchased and the
    individual price of each product until a 0 is entered in the total of products
    */
    do
    {
        cout << "Quantity of products: " << endl;
        cin >> products;

        // "Ifs" ​​to determine the operation to perform depending on the number of products entered
        if (products > 0)
        {
            cout << "Individual product price: $" << endl;
            cin >> price;
            invoice += (products * price);
        }
        else if (products == 0)
        {
            cout << "Exit";
        }
        else
        {
            cout << "Invalid quantity of products, enter a valid quantity" << endl;
        }

    } while (products != 0);

    // Print the results
    cout << "The total to be billed si: $" << invoice << endl;

    // Return 0 means that the program ends succesfully
    return 0;
}