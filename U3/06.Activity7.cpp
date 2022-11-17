#include <iostream>
#include <stdalign.h>
#include <time.h>

// Namespace avoid using std:: on all input and output
using namespace std;

bool existeJugada(int jugada);
void imprimirJugada();
bool comprobarJugada(int jugada);
void colocarJugada(int jugada);
bool comprobarVictoria();
int ingresarModoDeJuego();
void clonarJugadas();
bool comprobarVictoriaPc();
bool evitarVictoriaPc();
void generarNumeroAleatorio();

char matriz[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char matrizR[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int jugada;
int simbolo = 0;
int ren, col;

int main()
{
    bool existe, ocupada, victoria = false, victoriaPc = false, evitarPc = false, jugador = 0;
    int modoDeJuego;
    do
    {
        modoDeJuego = ingresarModoDeJuego();
        if (modoDeJuego == 1)
        {
            imprimirJugada();
            do
            {
                cout << endl;
                jugador = simbolo % 2;
                cout << "Ingrese una jugada jugador " << jugador + 1 << " : ";
                cin >> jugada;
                system("cls");
                existe = existeJugada(jugada);
                ocupada = comprobarJugada(jugada);

                if (existe == true)
                {
                    if (ocupada == false)
                    {
                        colocarJugada(jugada);
                        simbolo++;
                    }
                    else if (ocupada == true)
                    {

                        cout << "\033[0;31m"
                             << "Casilla ocupada, elija otra!!!"
                             << "\033[0m" << endl;
                        cout << endl;
                    }
                }
                else if (existe == false)
                {

                    cout << "\033[0;31m"
                         << "La jugada es invalida!!!"
                         << "\033[0m" << endl;
                    cout << endl;
                }
                imprimirJugada();
                victoria = comprobarVictoria();
            } while ((simbolo < 9) && (victoria == false));
        }

        else if (modoDeJuego == 2)
        {
            imprimirJugada();
            do
            {

                if (simbolo % 2 == 0)
                {

                    cout << endl;
                    cout << "Ingrese una jugada: ";
                    cin >> jugada;
                    system("cls");
                    existe = existeJugada(jugada);
                    ocupada = comprobarJugada(jugada);

                    if (existe == true)
                    {
                        if (ocupada == false)
                        {
                            colocarJugada(jugada);
                            simbolo++;
                        }
                        else if (ocupada == true)
                        {

                            cout << "\033[0;31m"
                                 << "Casilla ocupada, elija otra!!!"
                                 << "\033[0m" << endl;
                            cout << endl;
                        }
                    }
                    else if (existe == false)
                    {

                        cout << "\033[0;31m"
                             << "La jugada es invalida!!!"
                             << "\033[0m" << endl;
                        cout << endl;
                    }
                    victoria = comprobarVictoria();

                    imprimirJugada();
                }

                else
                {
                    clonarJugadas();
                    victoriaPc = comprobarVictoriaPc();
                    if (victoriaPc == true)
                    {

                        break;
                    }
                    else if (victoriaPc == false)
                    {
                        evitarPc = evitarVictoriaPc();
                        if (evitarPc == true)
                        {
                        }
                        else
                        {
                            generarNumeroAleatorio();
                        }
                    }
                    system("cls");
                    imprimirJugada();
                    simbolo++;
                }

            } while ((simbolo < 9) && (victoria == false && victoriaPc == false));
            system("cls");
            imprimirJugada();
            comprobarVictoria();
        }

        else
        {
            cout << "\033[0;31m"
                 << "Modo de juego invalido"
                 << "\033[0m" << endl;
        }
    } while (modoDeJuego != 1 && modoDeJuego != 2);
    return 0;
}

bool existeJugada(int jugada)
{
    if (jugada >= 1 && jugada <= 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool comprobarJugada(int jugada)
{

    if (jugada == 1)
    {
        ren = 0;
        col = 0;
    }
    else if (jugada == 2)
    {
        ren = 0;
        col = 1;
    }
    else if (jugada == 3)
    {
        ren = 0;
        col = 2;
    }
    else if (jugada == 4)
    {
        ren = 1;
        col = 0;
    }
    else if (jugada == 5)
    {
        ren = 1;
        col = 1;
    }
    else if (jugada == 6)
    {
        ren = 1;
        col = 2;
    }
    else if (jugada == 7)
    {
        ren = 2;
        col = 0;
    }
    else if (jugada == 8)
    {
        ren = 2;
        col = 1;
    }
    else if (jugada == 9)
    {
        ren = 2;
        col = 2;
    }

    if (matriz[ren][col] == 'x' || matriz[ren][col] == 'o')
    {
        return true;
    }
    else
    {
        return false;
    }
}
void imprimirJugada()
{
    int x = 0, y = 0;
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

                    if (matriz[x][y] == 'x')
                    {
                        cout << "\033[0;32m" << matriz[x][y] << "\033[0m";
                    }
                    else if (matriz[x][y] == 'o')
                    {
                        cout << "\033[0;33m" << matriz[x][y] << "\033[0m";
                    }
                    else
                    {
                        cout << matriz[x][y];
                    }
                    y++;
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
        if (y > 1)
        {
            x++;
        }
        y = 0;
    }
}

void colocarJugada(int jugada)
{
    if (simbolo % 2 == 0)
    {
        matriz[ren][col] = 'x';
    }
    else
    {
        matriz[ren][col] = 'o';
    }
}

bool comprobarVictoria()
{
    if ((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]) ||
        (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]) ||
        (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]) ||
        (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]) ||
        (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]) ||
        (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]) ||
        (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]) ||
        (matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]))
    {
        if (matriz[ren][col] == 'x')
        {
            cout << "\033[0;32m"
                 << "Victoria player 1"
                 << "\033[0m";
            return true;
        }
        else
        {
            cout << "\033[0;33m"
                 << "Victoria player 2"
                 << "\033[0m";
            return true;
        }
    }
    else
    {
        return false;
    }
}

int ingresarModoDeJuego()
{

    int modoDeJuego;

    cout << "Menu" << endl;
    cout << "Oprima 1 Player 1 vs Player 2" << endl;
    cout << "Oprima 2 Player 1 vs CPU" << endl;
    cout << "Modo de juego:";
    cin >> modoDeJuego;
    system("cls");

    if (modoDeJuego == 1)
    {
        return 1;
    }
    else if (modoDeJuego == 2)
    {
        return 2;
    }
    else
    {
        return 3;
    }
}

void clonarJugadas()
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            matrizR[row][col] = matriz[row][col];
        }
    }
}

bool comprobarVictoriaPc()
{

    for (int i = 1; i <= 9; i++)
    {

        bool ocupada, victoria;

        ocupada = comprobarJugada(i);

        if (ocupada == false)
        {
            matriz[ren][col] = 'o';
            victoria = comprobarVictoria();
            if (victoria == true)
            {
                return true;
                break;
            }
            else
            {
                matriz[ren][col] = matrizR[ren][col];
            }
        }
    }
    return false;
}
bool evitarVictoriaPc()
{

    for (int i = 1; i <= 9; i++)
    {

        bool ocupada, victoria;

        ocupada = comprobarJugada(i);

        if (ocupada == false)
        {
            matriz[ren][col] = 'x';
            victoria = comprobarVictoria();
            if (victoria == true)
            {
                matriz[ren][col] = 'o';
                return true;
                break;
            }
            else
            {
                matriz[ren][col] = matrizR[ren][col];
            }
        }
    }
    return false;
}

void generarNumeroAleatorio()
{

    bool ocupada = true;
    int aleatorio;

    do
    {
        srand(time(NULL));
        aleatorio = 1 + rand() % 9 - 1 + 1;

        ocupada = comprobarJugada(aleatorio);

        if (ocupada == false)
        {
            matriz[ren][col] = 'o';
        }
        else
        {
            ocupada = true;
        }

    } while (ocupada == true);
}
