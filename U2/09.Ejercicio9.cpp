// Input/Output LIbrary between the screet "n" keyboard#include <iostream>
#include <iostream>
#include <cmath>
// Namespace avoid using std:: on all input and output
using namespace std;

int equationSolver(float valor)
{
    return pow(valor, 2) - valor - 12;
}

int main()
{
    float a, b, c, ya, yb, yc;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";

    do
    {
        ya = equationSolver(a);
        yb = equationSolver(b);
        if ((ya > 0 && yb < 0) || (yb > 0 && ya < 0))
        {
            c = (a + b) / 2;
            yc = ya;
            cout << c;
        }
        else
        {
            cout "No";
        }
        if ((ya > 0 && yb < 0) || (yb > 0 && ya < 0))
        {
            c = (a + b) / 2;
            yc = ya;
            cout << c;
        }
        else
        {
            cout "No";
        }
    }