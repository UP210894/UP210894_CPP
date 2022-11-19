/*
Date: 19/11/2022
Authot: Enrique Abel Herrera Vargas
Email: up210894@alumnos.upa.edu.mx
Description: Tic tac toe game
*/

// Preprocessor directives
#include <iostream>
#include <stdalign.h>
#include <time.h>

// Namespace avoid using std:: on all input and output
using namespace std;

// Function declaration
bool checkThatThePlayExists(int play);
void printPlay();
bool checkIfPlayIsBusy(int play);
void placePlay(int play);
bool checkVictory();
int enterGameMode();
void clonePlays();
bool checkVictoryPc();
bool avoidVictoryPlayerPc();
void generateRandomNumberPc();

// Declaration of global variables
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char matrixCopy[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int play;
int turn = 0;
int ren, col;

//-----------MAIN FUNTION---------
int main()
{

    // Declaration of local variables
    bool existingPlay, busyPlay, victory = false, victoryPC = false, avoidedDefeat = false, player = 0;
    int gameMode;
    do
    {
        // Determine game mode
        gameMode = enterGameMode();

        // Player vs player game mode
        if (gameMode == 1)
        {
            printPlay();
            do
            {
                cout << endl;
                player = turn % 2;
                cout << "Enter a play player " << player + 1 << " : ";
                cin >> play;
                system("clear");
                existingPlay = checkThatThePlayExists(play);
                busyPlay = checkIfPlayIsBusy(play);

                if (existingPlay == true)
                {
                    if (busyPlay == false)
                    {
                        placePlay(play);
                        turn++;
                    }
                    else
                    {
                        cout << "\033[0;31m"
                             << "Busy play, pick another!!!"
                             << "\033[0m" << endl;
                        cout << endl;
                    }
                }
                else
                {
                    cout << "\033[0;31m"
                         << "The play is invalid!!!"
                         << "\033[0m" << endl;
                    cout << endl;
                }

                printPlay();
                victory = checkVictory();

            } while ((turn < 9) && (victory == false));
        }

        // Player vs Pc game mode
        else if (gameMode == 2)
        {
            printPlay();
            do
            {

                if (turn % 2 == 0)
                {

                    cout << endl;
                    cout << "Enter a play: ";
                    cin >> play;
                    system("clear");
                    existingPlay = checkThatThePlayExists(play);
                    busyPlay = checkIfPlayIsBusy(play);

                    if (existingPlay == true)
                    {

                        if (busyPlay == false)
                        {
                            placePlay(play);
                            turn++;
                        }

                        else
                        {
                            cout << "\033[0;31m"
                                 << "Busy play, pick another!!!"
                                 << "\033[0m" << endl;
                            cout << endl;
                        }
                    }
                    else
                    {
                        cout << "\033[0;31m"
                             << "The play is invalid!!!"
                             << "\033[0m" << endl;
                        cout << endl;
                    }

                    victory = checkVictory();
                    printPlay();
                }

                else
                {
                    clonePlays();
                    victoryPC = checkVictoryPc();
                    if (victoryPC == true)
                    {
                        break;
                    }

                    else
                    {
                        avoidedDefeat = avoidVictoryPlayerPc();

                        if (avoidedDefeat == false)
                        {
                            generateRandomNumberPc();
                        }

                        else
                        {
                        }
                    }
                    system("clear");
                    printPlay();
                    turn++;
                }

            } while ((turn < 9) && (victory == false && victoryPC == false));

            system("cls");
            printPlay();
            checkVictory();
        }

        // Invalid game mode
        else
        {
            cout << "\033[0;31m"
                 << "Invalid game mode"
                 << "\033[0m" << endl;
        }

    } while (gameMode != 1 && gameMode != 2);

    return 0;
}

bool checkThatThePlayExists(int play)
{
    if (play >= 1 && play <= 9)
    {
        return true;
    }

    else
    {
        return false;
    }
}

bool checkIfPlayIsBusy(int play)
{

    if (play == 1)
    {
        ren = 0;
        col = 0;
    }
    else if (play == 2)
    {
        ren = 0;
        col = 1;
    }
    else if (play == 3)
    {
        ren = 0;
        col = 2;
    }
    else if (play == 4)
    {
        ren = 1;
        col = 0;
    }
    else if (play == 5)
    {
        ren = 1;
        col = 1;
    }
    else if (play == 6)
    {
        ren = 1;
        col = 2;
    }
    else if (play == 7)
    {
        ren = 2;
        col = 0;
    }
    else if (play == 8)
    {
        ren = 2;
        col = 1;
    }
    else if (play == 9)
    {
        ren = 2;
        col = 2;
    }

    if (matrix[ren][col] == 'x' || matrix[ren][col] == 'o')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void printPlay()
{
    int row1 = 0, col1 = 0;
    cout << "Juego del gato" << endl;
    cout << endl;
    cout << "\033[0;32m"
         << "Player 1 (x)\t"
         << "\033[0m";
    cout << "\033[0;33m"
         << "Player 2 (o)"
         << "\033[0m" << endl;
    cout << endl;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 11; col++)
        {

            if (row != 1 && row != 3)
            {
                if (col == 1 || col == 5 || col == 9)
                {

                    if (matrix[row1][col1] == 'x')
                    {
                        cout << "\033[0;32m" << matrix[row1][col1] << "\033[0m";
                    }
                    else if (matrix[row1][col1] == 'o')
                    {
                        cout << "\033[0;33m" << matrix[row1][col1] << "\033[0m";
                    }
                    else
                    {
                        cout << matrix[row1][col1];
                    }
                    col1++;
                }

                else if (col == 3 || col == 7)
                {
                    cout << "|";
                }

                else
                {
                    cout << " ";
                }
            }
            else if (row == 1 || row == 3)
            {
                if (col == 3 || col == 7)
                {
                    cout << "|";
                }
                else
                {
                    cout << "-";
                }
            }
        }
        cout << endl;
        if (col1 > 1)
        {
            row1++;
        }
        col1 = 0;
    }
}

void placePlay(int play)
{
    if (turn % 2 == 0)
    {
        matrix[ren][col] = 'x';
    }
    else
    {
        matrix[ren][col] = 'o';
    }
}

bool checkVictory()
{
    if ((matrix[0][0] == matrix[0][1] && matrix[0][0] == matrix[0][2]) ||
        (matrix[1][0] == matrix[1][1] && matrix[1][0] == matrix[1][2]) ||
        (matrix[2][0] == matrix[2][1] && matrix[2][0] == matrix[2][2]) ||
        (matrix[0][0] == matrix[1][0] && matrix[0][0] == matrix[2][0]) ||
        (matrix[0][1] == matrix[1][1] && matrix[0][1] == matrix[2][1]) ||
        (matrix[0][2] == matrix[1][2] && matrix[0][2] == matrix[2][2]) ||
        (matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2]) ||
        (matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0]))
    {
        if (matrix[ren][col] == 'x')
        {
            cout << "\033[0;32m"
                 << "Victory player 1"
                 << "\033[0m";
            return true;
        }
        else
        {
            cout << "\033[0;33m"
                 << "Victory player 2"
                 << "\033[0m";
            return true;
        }
    }
    else
    {
        return false;
    }
}

int enterGameMode()
{

    int gameMode;

    cout << endl;
    cout << "Menu" << endl;
    cout << "Press 1:   Player 1 vs Player 2" << endl;
    cout << "Press 2:   Player 1 vs CPU" << endl;
    cout << endl;
    cout << "Game mode:";
    cin >> gameMode;
    system("clear");

    if (gameMode == 1)
    {
        return 1;
    }
    else if (gameMode == 2)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void clonePlays()
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            matrixCopy[row][col] = matrix[row][col];
        }
    }
}

bool checkVictoryPc()
{

    for (int playNumber = 1; playNumber <= 9; playNumber++)
    {

        bool busyPlay, victory;

        busyPlay = checkIfPlayIsBusy(playNumber);

        if (busyPlay == false)
        {
            matrix[ren][col] = 'o';
            victory = checkVictory();
            if (victory == true)
            {
                return true;
                break;
            }
            else
            {
                matrix[ren][col] = matrixCopy[ren][col];
            }
        }
    }
    return false;
}
bool avoidVictoryPlayerPc()
{

    bool busyPlay, victory;

    for (int playNumber = 1; playNumber <= 9; playNumber++)
    {

        busyPlay = checkIfPlayIsBusy(playNumber);

        if (busyPlay == false)
        {
            matrix[ren][col] = 'x';
            victory = checkVictory();
            if (victory == true)
            {
                matrix[ren][col] = 'o';
                return true;
                break;
            }
            else
            {
                matrix[ren][col] = matrixCopy[ren][col];
            }
        }
    }
    return false;
}

void generateRandomNumberPc()
{

    bool busyPlay = true;
    int random;

    do
    {
        srand(time(NULL));
        random = 1 + rand() % 9 - 1 + 1;

        busyPlay = checkIfPlayIsBusy(random);

        if (busyPlay == false)
        {
            matrix[ren][col] = 'o';
        }
        else
        {
            busyPlay = true;
        }

    } while (busyPlay == true);
}
