/*
Date: 16/10/2022
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Loop "do while" find the root of a function
-----Problem-----
Write a program that prints calculates the root of a function and prints the process.
*/

// Preprocessor directives
#include <iostream>
#include <cmath>
#include <iomanip>

// Namespace avoid using std:: on all input and output
using namespace std;

// Function to solve an equation
float equationSolver(float valor)
{
    return (pow(valor, 2) - valor - 12);
}

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    float error = .01, a, b, c, ya, yb, yc, equality = 1;

    // Enter the minimum and maximum value
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // "For" loop to place multiple hyphens
    for (int line = 0; line <= 160; line++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "|\t\t"
         << "a\t\t\t"
         << "b\t\t\t"
         << "c\t\t\t"
         << "ya\t\t\t"
         << "yb\t\t\t"
         << "yc\t\t\t"
         << "|" << endl;

    // "For" loop to place multiple hyphens
    for (int line = 0; line <= 160; line++)
    {
        cout << "-";
    }
    cout << endl;

    // Loop "do while" find the root of the function
    do
    {
        // Divide "a" and "b" to find "c", and find the value of "ya", "yb", and "yc" with our function to solve the equation
        c = (a + b) / 2;
        ya = equationSolver(a);
        yc = equationSolver(c);
        yb = equationSolver(b);

        // Print the results of each cycle
        cout << "|\t\t" << fixed << setprecision(8) << a << "\t\t" << b << "\t\t" << c << "\t\t" << ya << "\t\t" << yb << "\t\t" << yc << "\t\t|" << endl;

        // "If" to assign a new value to "a" or "b"
        if ((ya * yc) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        if (a==b)
        {
            equality = 0;
            break;
        }

        // "If" to avoid a loop when "a" and "b" are equal
        for (int line = 0; line <= 160; line++)
        {
            cout << "-";
        }
        cout << endl;

    } while (abs(yc) >= error);

    // Print the results
    if (equality == 0)
    {
        cout << "There is no root" << endl;
    }
    else
    {
        cout << "The root of the equation is " << lround(c) << endl;
    }

    return 0;
}