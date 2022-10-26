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
int getMaxVal (int num1, int num2);

//-----------FUNTION---------
int main()
{
    int first, second, max;
    cout << "Enter de first number: ";
    cin >> first;
    cout << "Enter de second number: ";
    cin >> second;

    max = getMaxVal(first, second);
    cout << "The max number is: " << max << endl; 
    return 0;
}
int getMaxVal (int num1, int num2){
    return (num1 > num2)?num1:num2;
}

