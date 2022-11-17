/*
Date:
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description:
-----Problem-----

*/

// Preprocessor directives
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    int conjunto[5][5];

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Ingresa un valor: ";
            cin >> conjunto[row][col];
        }
    }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << conjunto[row][col];
        }
        cout << endl;
    }
    return 0;
}