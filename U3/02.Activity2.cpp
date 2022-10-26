/*
Date: 24/10/2022
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description:  
-----Problem-----

*/

// Preprocessor directives
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

void getCambio (int money);
void imprimir (int money);

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

//-----------MAIN FUNTION---------
int main()
{
    int mont; 
    cout << "Enter the mont: " << endl;
    cin >> mont;
    getCambio(mont);
    imprimir(mont);

    return 0;
}

void getCambio (int money){

    quinientos = money / 500; 
    money = money % 500; 
    docientos = money / 200; 
    money = money % 200; 
    cien = money / 100; 
    money = money % 100; 
    cincuenta = money / 50; 
    money = money % 50; 
    veinte = money / 20; 
    money = money % 20; 
    diez = money / 10; 
    money = money % 10; 
    cinco = money / 5; 
    money = money % 5; 
    dos = money / 2; 
    money = money % 2; 
    uno = money / 1; 
    money = money % 1;
}
void imprimir (int money){
    cout << "Cambio de " << money << endl; 
    cout << "$500 \t" << quinientos << endl; 
    cout << "$200 \t" << docientos << endl; 
    cout << "$100 \t" << cien << endl; 
    cout << "$50 \t" << cincuenta << endl; 
    cout << "$20 \t" << veinte << endl; 
    cout << "$10 \t" << diez << endl; 
    cout << "$5 \t" << cinco << endl; 
    cout << "$2 \t" << dos << endl; 
    cout << "$1 \t" << uno << endl; 
}

