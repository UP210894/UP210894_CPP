/*
Date: 03/10/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Cycle "Do While" to ask temperature
-----Problem-----
Make a program in whish 6 temperatures are entered and determine the average,
 the lowest and the highest
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int counter = 0;
    float temperature, temperaturesum = 0, elderly = -100000, minior = 100000;

    // "Do While" cycle to take temperature until 6 temperatures are entered
    do
    {
        // Ask the user the temperature
        cout << "What is the termperature ?" << endl;
        cin >> temperature;

        // Mathematical operation to determine the average of the total temperatures
        temperaturesum += temperature;

        // "If" to determine the highest temperature
        if (temperature >= elderly)
        {
            elderly = temperature;
        }

        // "If" to determine the lowest temperature
        if (temperature <= minior)
        {
            minior = temperature;
        }

        counter++;

    } while (counter < 6);

    // Print the results
    cout << "The average temperature is: " << temperaturesum / 6 << " °C" << endl;
    cout << "The highest temperature is: " << elderly << " °C" << endl;
    cout << "The lowest temperature is: " << minior << " °C" << endl;

    // Return 0 means that the program ends succesfully
    return 0;
}