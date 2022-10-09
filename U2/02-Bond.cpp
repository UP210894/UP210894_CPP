/*
Date: 26/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Get employee bonus
-----Problem-----
In a certain company, its employees are evaluated at the end of each year.
The points that can be obtained in the evaluation start at 0.0 and can go up,
translating into better benefits. The points employees can earnthey can be 0.0,
 0.4, 0.6 or more, but not intermediate values ​​between the mentioned figures. A
Below is a table with the levels corresponding to each score. The amount of money
earned on each level is $2,400 multiplied by the player's score.level.
  Level         |   Puntuation
  unacceptable  |   0.0
  acceptable    |   0.4
  commendable   |   0.6 or more

Write a program that reads the user's score and indicates their performance level,
as well as the amount of money the user will receive
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    double qualification;
    string performance;

    // Request a rating from the user
    cout << "Write your rating" << endl;
    cin >> qualification;

    // "If" to determine if a valid grade has been entered
    if ((qualification == 0 || qualification == 0.4 || qualification >= 0.6) && qualification <= 1)
    {
        // "If" to determine the final performance of each username
        if (qualification == 0)
        {
            performance = "unacceptable";
        }
        else if (qualification == 0.4)
        {
            performance = "acceptable";
        }
        else if (qualification >= 0.6)
        {
            performance = "commendable";
        }
        // Print the results
        cout << "His performance is " << performance << endl;
        cout << "Your bonus is $" << 2400 * qualification << endl;
    }

    // In case an incorrect qualification is typed, it will show you a message
    else
    {
        cout << "Rating not accepted" << endl;
    }

    // Return 0 means that teh program ends succesfully
    return 0;
}