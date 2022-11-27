<div align= center>

 # TIC TAC TOE

 <div align= center> 

 ## INDEX

 >A) [INSTRUCTIONS FOR IMPLEMENTATION AND USE](#instructions-for-implementation-and-use)

>B) [FLOWCHART](#flowchart) 

>C) [IMPLEMENTATION OF THE PROGRAM](#implementation-of-the-program)

>D) [CONCLUSION](#conclusion)

<div>

___________________

<div align = center>

# INSTRUCTIONS FOR IMPLEMENTATION AND USE

<div align = "justify">

## Instructions to play Tic tac toe on Linux

-----

Clone my repository by entering the following command in your terminal

```c++ 

git clone https://github.com/UP210894/UP210894_CPP.git

```

Check if GCC is already installed with the following command

```c++ 

gcc -v

```
If it is not installed run the following command.

```c++ 

sudo apt-get update

```

Then install the GNU compiler tools and the GDB debugger with the following command.

```c++ 

sudo apt-get install build-essential gdb

```

Through your terminal go to the folder "U3".
Once inside enter the following command to compile the program.

```c++ 

gcc Tic_Tac_Toe.cpp

```

To run the program enter the following command

```c++ 

./Tic_Tac_Toe

```

## General considerations

<div align = "justify">

If you want to know more about how to configure Visual Studio Code to use the GCC C++ (g++) compiler, the following link will help you answer your questions

```c++ 

https://code.visualstudio.com/docs/cpp/config-linux

```
<div align = center>

[BACK TO INDEX](#index)

-----
## FLOWCHART

<div align = center>

<img src="../imagens\Imagenes_Redme3\Diagrama++.png" align = "center" height = "1000" width="1500"/>

[BACK TO INDEX](#index)

-----
# IMPLEMENTATION OF THE PROGRAM

<div align = center>

## Aspects to consider

<div align = "justify">

* Player vs Player mode: 
In player vs player mode, player 1 will always be the one to start, in addition to being the one to use the "x" token.
* Player vs PC mode: In player vs PC mode, the player will always be the one to start, in addition to being the one to use the "x" token

<div align = center>

### Menu

<div align = "justify">

The program will show you the game menu, if you want to play in player vs player mode you must enter the number 1, if you want to play against the PC you must enter the number 2.

<img src="../imagens\Imagenes_Redme3\Menu.png" align = "center" height = "85" width="250"/>

If a game mode other than 1 or 2 is entered, the program will display a message indicating that the chosen game mode is invalid.

<img src="../imagens\Imagenes_Redme3\Modo_De_Juego_Invalido.png" align = "center" height = "120" width="250"/>

<div align = center>

### Player 1 vs Player 2

<div align = "justify">

After choosing game mode 1, the program will display the game board and request player 1 to enter a move.

<img src="../imagens\Imagenes_Redme3\Tablero_1vs1.png" align = "center" height = "165" width="230"/>

After player 1 enters his move, the chosen move will be displayed on the board and immediately prompt player 2 to enter the next move

<img src="../imagens\Imagenes_Redme3\Casilla1.png" align = "center" height = "185" width="270"/>


The process will continue repeating, but if a move is entered that is not between 1 and 9, the program will show a message indicating that the move is invalid.

<img src="../imagens\Imagenes_Redme3\Juada_inexistente_1v1.png" align = "center" height = "185" width="260"/>

If you enter a move that has already been chosen, the program will display a message indicating that the move has already been chosen.

<img src="../imagens\Imagenes_Redme3\Jugada invalida_1v1.png" align = "center" height = "185" width="250"/>

After a valid play is entered and it is vacated, the game will continue to ask players to enter a play until one of the players wins or 9 plays have been entered, in which case the program will display a "tie" message.

<img src="../imagens\Imagenes_Redme3\Empate_1vs1.png" align = "center" height = "150" width="245"/>


In case player 1 wins, the program will display a message saying "Victroy Player 1" with the player's color.

<img src="../imagens\Imagenes_Redme3\Victoria_Player1_1vs1.png" align = "center" height = "150" width="245"/>


In case player 2 wins, the program will display a message saying "Victory Player 2" with the player's color.

<img src="../imagens\Imagenes_Redme3\Victoria_Player2_1vs1.png" align = "center" height = "150" width="245"/>

<div align = center>

### Player vs PC

<div align = "justify">

After choosing game mode 2, the program will display the game board and request player 1 to enter a move.

<img src="../imagens\Imagenes_Redme3\Tablero_1vsPC.png" align = "center" height = "150" width="235"/>

After the player enters his move, the board will reflect the chosen move and immediately display the move chosen by the PC and prompt the player to enter a move again.

<img src="../imagens\Imagenes_Redme3\Casilla1_1vsPC.png" align = "center" height = "150" width="240"/>

After the player re-enters a move, the PC will try to block a possible win for the player by placing my token on the place that blocks the move

<img src="../imagens\Imagenes_Redme3\Casilla2_Bloquea_Victoria_1vsPC.png" align = "center" height = "150" width="240"/>

If the player has any chance of winning again, the PC will continue to prevent the player from winning.

<img src="../imagens\Imagenes_Redme3\Casilla3_Bloquea_Victoria2_-Posible_Victoria_1vsPC.png" align = "center" height = "150" width="230"/>

If after the player enters a play they have no chance to win, and the PC has no chance to win either, the PC will generate a random play, as long as that play has not been chosen before.

<img src="../imagens\Imagenes_Redme3\Casilla4_Aleatorio_1vsPC.png" align = "center" height = "150" width="225"/>


If after having entered all the possible moves there is no winner, the program will show a message to indicate that there was a tie.

<img src="../imagens\Imagenes_Redme3\Casilla5_Empate_1vsPC.png" align = "center" height = "150" width="220"/>

If the computer has a chance to win, it will choose the move with which it can win and the program will show the message "Game over"

<img src="../imagens\Imagenes_Redme3\Casilla2.1_Posible_Victoria_1vsPC.png" align = "left" height = "150" width="215"/>

<img src="../imagens\Imagenes_Redme3\Casilla2.2._Derrota_1vsPC.png" align = "center" height = "150" width="215"/>

If the player wins the program will show the message "Win"

<img src="../imagens\Imagenes_Redme3\Casilla2.2_Victoria_1vsPC.png" align = "center" height = "150" width="225"/>

<div align = center>

[BACK TO INDEX](#index)

------

## CONCLUSION

<div align = "justify">

Doing this work was a lot of fun as it was very exciting to think that I would program a game, however, it was also a challenge, as I had never done anything like this.
At first it was very complicated for me because I had many ideas in my head, but I did not know how to put them together, until one day I decided to start working more slowly and analyzing each of the operations that my program had to carry out to work, it was at that moment where I saw the advantages of using several functions since it allowed me to raise each of my ideas separately and in the end put them together. It was all easier. 
At first my biggest limitation was to think about how to program artificial intelligence since at first I could not understand how the computer could think and make decisions on its own, until I came to the conclusion that we had to think of the computer as if it were a real person and capture each of the steps that people do in our mind to make it work.  
This work integrated concepts such as the functioning of functions, different types of variables and artificial intelligence. 


<div align = center>

[BACK TO INDEX](#index)



