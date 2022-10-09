/*
Date: 29/09/2022
Authot: Erique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Pizzeria menu
-----Problem-----
The Bella Napoli pizzeria offers vegetarian and non-vegetarian pizzas to its customers. The
Ingredients for each type of pizza are listed below.
    -Vegetarian ingredients: Pepper and tofu.
    -Non-vegetarian ingredients: Pepperoni, Ham and Salmon.
Write a program that asks the user if he wants a vegetarian pizza or not, and based on your answer, 
show you a menu with the ingredients available for you to choose from.
You can only choose one ingredient besides the mozzarella and the tomato that are in all the
pizza.
At the end it should be shown on the screen if the chosen pizza is vegetarian or not and all the
ingredients it carries
*/

// Input/Output LIbrary between the screet "n" keyboard
#include <iostream>

// Namespace avoid using std:: on all input and output
using namespace std;

//-----------MAIN FUNTION---------
int main()
{
    // Declaration of variables
    int vegetarian, extra;
    string bonusIngredient, type;

    // Ask if the pizza would be vegetarian
    cout << "Would your pizza be vegetarian?" << endl;
    cout << "1.- Yes" << endl;
    cout << "2.- No" << endl;
    cin >> vegetarian;

    // "Ifs" is used to determine what type of menu to show you
    if (vegetarian == 1)
    {
        type = "is";
        cout << "Extra ingredient for your pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Pepper" << endl;
        cout << "2.- Tofu" << endl;
        cin >> extra;

        // "Ifs" to determine what extra ingredient the pizza will have
        if (extra == 1)
        {
            bonusIngredient = "pepper";
        }
        else if (extra == 2)
        {
            bonusIngredient = "tofu";
        }
        else
        {
            cout << "Choose a valid option" << endl;
        }
    }
    else if (vegetarian == 2)
    {
        type = "is not";
        cout << "Extra ingredient for your pizza" << endl;
        cout << "-----Menu-----" << endl;
        cout << "1.- Pepperoni" << endl;
        cout << "2.- Ham" << endl;
        cout << "3.- Salmon" << endl;
        cin >> extra;

        // "Ifs" to determine what extra ingredient the pizza will have
        if (extra == 1)
        {
            bonusIngredient = "pepperoni";
        }
        else if (extra == 2)
        {
            bonusIngredient = "ham";
        }
        else if (extra == 3)
        {
            bonusIngredient = "salmon";
        }
        else
        {
            cout << "Choose a valid option" << endl;
        }
    }
    else
    {
        cout << "Choose a valid option" << endl;
    }

    // "If" to show the message of the order placed only when the pizza has been ordered successfully
    if ((vegetarian == 1 && (extra == 1 || extra == 2)) || (vegetarian == 2 && (extra == 1 || extra == 2 || extra == 3)))
    {

        // Print the results
        cout << "Your pizza " << type << " vegetarian and contains mozzarella, tomato and " << bonusIngredient;
    }

    // Return 0 means that the program ends succesfully
    return 0;
}
