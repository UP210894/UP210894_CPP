/*
Date: 13/10/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Cycle "Do While" to calculate the total amount of the bill
-----Problem-----
Write a program that performs the conversion from decimal to binary, only for
integer greater than 0. The result can be displayed as an integer variable or
in a set of character.
*/

// Input/Output LIbrary between the screet "n" keyboard#include <iostream>
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int counter, table;

    // Enter what number your multiplication table will be and what number your multiplication tabla will reach
    cout << "Enter until you want your multiplication table to arrive" << endl;
    cin >> counter;
    cout << "Enter that number will be your multiplication board" << endl;
    cin >> table;

    cout << "\tMultiplication table of number " << table << "\t" << endl;

    // "For" loopto place multiple hyphens
    for (int line = 0; line <= 48; line++)
    {
        cout << "-";
    }
    cout << endl;

    // Loop "for" to print the results of the multiplication table
    for (int estar = 1; estar <= counter; estar++)
    {
        // Print the results
        cout << "|\t" << estar << "\tx\t" << table << "\t=\t" << estar * table << "\t|" << endl;

        // "For" loopto place multiple hyphens
        for (int line = 0; line <= 48; line++)
        {
            cout << "-";
        }
        cout << endl;
    }

    // Return 0 means that the program ends succesfully
    return 0;
}