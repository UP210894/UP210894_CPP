/*
Date: 07/10/2022
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Loop "do while" to convert a decimal number to an integer
-----Problem-----
Write a program that performs the conversion from decimal to binary, only for
integer greater than 0. The result can be displayed as an integer variable or
in a set of character.
*/

// Preprocessor directives
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int decimal;
    string result = " ";

    // Cycle "Do While" to ask to type a decimal number while not typing a positive decimal number
    do
    {
        // Enter a decimal number
        cout << "Type a number: " << endl;
        cin >> decimal;

        // "If" to enter a while loop if a positive decimal number is entered
        if (decimal > 0)
        {
            // "While" to convert the decimal variable to a positive number as long as the number is greater than 0
            while (decimal > 0)
            {
                result = to_string(decimal % 2) + result;
                decimal /= 2;
            }
        }
        else if (decimal == 0)
        {
            result = '0';
        }
        else
        {
            cout << "Type a positive number" << endl;
        }

    } while (decimal < 0);

    // Print the results
    cout << "Decimal number converted to binary: " << result << endl;

    // Return 0 means that the program ends succesfully
    return 0;
}
