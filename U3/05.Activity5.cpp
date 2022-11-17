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
    system("color 06");
    char conjunto[11][9] = {0};

    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 11; col++)
        {
            if (col == 3 || col == 7)
            {

                cout << "|";
            }
            else if ((col != 3 && col != 7) && (row == 2 || row == 5))
            {
            cout << "_";
            }
            else
            {
                cout << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}