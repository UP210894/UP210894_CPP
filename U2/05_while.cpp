#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    int con = 0;
    int contwo = 0;

    for (int contador; contador <= 10; contador++)
    {
        cout << contador;
    }
    cout << endl;

    while (con <= 10)
    {
        con += 2;
    }
    cout << endl;

    do
    {
        cout << contwo;
        contwo = contwo + 2;
    } while (contwo <= 10);
    
    return 0;
}