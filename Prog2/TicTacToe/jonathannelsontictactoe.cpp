//Name: Jonathan Nelson
//Class: Data Structures
//08/26/2021
/*Program 1
 TicTacToe Class

 Create a class TicTacToe that will enable you to write a complete program to play the game of tic-tac-toe.

 The class contains as private data a 3-by-3 two-dimensional array of integers. The constructor should initialize the empty board to all blanks.

 Allow two people to play. Player1 is X and Player2 is O.

 After each move determine whether the game has been won, a draw or should continue.

 You are provided the TicTacToe.h and the Main.cpp that you must use. You are to provide the TicTacToe.cpp

 Hint:

 The following code:

 #include <iostream>

 #include <iomanip>

 using namespace std;

 int main() {

         int store_x{'X'},store_space{' '};

         cout << "store_x is " << store_x << " but can be converted to " << static_cast<char>(store_x) << " \n";

         cout << "store_space is " << store_space << " but can be converted to " << static_cast<char>(store_space) << " \n";

 }



 Produces the following output:

 store_x is 88 but can be converted to X

 store_space is 32 but can be converted to
*/

#include <iostream>
#include <iomanip>
#include <array>
#include "jonathannelsonTicTacToe.h"

using namespace std;

TicTacToe::TicTacToe(){
        for (int i = 0; i < 3; i++)
        {
                 for (int j = 0; j < 3; j++)
                {
                board[i][j] = ' ';
                }
        }
}

void TicTacToe::makeMove(){

        cout << "\n\nWelcome to TicTacToe!, play until one of you wins and the game will ask if you would like to play again. \n\nEnjoy!\n\n";

int playAgain = 0;

do
{
int xoMoveCounter = 1;

while (gameStatus() == CONTINUE)
{

        xoMoveCounter++;

        printBoard();

        if (xoMove(xoMoveCounter) == true)  // Dictates which letter gets placed therefore, which player's turn it is.
        {
                cout << "It is the x player's move!\n\nx player, enter the coordinate where you would like to play in the format row (0-2) followed by column (0-2)\n\n";
        }
                if (xoMove(xoMoveCounter) == false)
        {
                cout << "It is the o player's move!\n\no player, enter the coordinate where you would like to play in the format row (0-2) followed by column (0-2)\n\n";
        }

int x = 0,y = 0; 

        cin >> x >> y;

while (validMove(x,y) == false)  // Forces valid input for the board coordinates
{
        cout << "That was not a valid move, try again.\n\n";

        cin >> x >> y;
}

if (xoMove(xoMoveCounter) == true)  // Places an x or o depending on the player turn
        {
                board[x][y] = 88; // 88 = x
        }
                if (xoMove(xoMoveCounter) == false)
        {
                board[x][y] = 111; // 111 = o
        }
}

        printBoard();

if (gameStatus() == DRAW)
{
        cout << "\n\nThe game ended in a tie!\n\nWould you like to play again to settle the score?\n\nEnter 1 to play again or 0 to end the program\n\n";
        cin >> playAgain;

        if (playAgain != 1)
        {
                cout << "\n\nWell I guess you guys will just have to find another way to setlle the score then.  Thanks for playing!\n\n";
        }  
}
if (gameStatus() == WIN)
{
        cout << "\n\nCongratulations ";
        if(xoMove(xoMoveCounter) == true){
                cout << 'x';
        } 
        if(xoMove(xoMoveCounter) == false){
                cout << 'o';
        } 
        cout << " player!  You've won this round.\n\nEnter 1 to play again or 0 to end the program\n\n";
        cin >> playAgain;

        if (playAgain != 1)
        {
                cout << "\n\nGoodbye! Thanks for playing!\n\n";
        }  
}
} while (playAgain == 1);




}



void TicTacToe::printBoard() const {

    cout << "     |     |     " << endl;
    cout << "  " << static_cast<char>(board[0][0]) << "  |  " << static_cast<char>(board[0][1]) << "  |  " << static_cast<char>(board[0][2]) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << static_cast<char>(board[1][0]) << "  |  " << static_cast<char>(board[1][1]) << "  |  " << static_cast<char>(board[1][2]) << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << static_cast<char>(board[2][0]) << "  |  " << static_cast<char>(board[2][1]) << "  |  " << static_cast<char>(board[2][2]) << endl;

    cout << "     |     |     " << endl << endl;

}

bool TicTacToe::validMove(int x,int y) const{
        if (x <= 2 && x >= 0)
        {
                if (y <= 2 && y >= 0)
        {
                        if (board[x][y] == ' ')
        {
                                return true;
        }
        }
        }
        else
        {
                                return false;
        }
 
        
}

bool TicTacToe::xoMove(int xoMoveCounter){

        if (xoMoveCounter % 2 == 0)
        {
                return true;
        }
        if (xoMoveCounter % 2 == 1)
        {
                return false;
        }
}

TicTacToe::Status 

TicTacToe::gameStatus() const {

for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)

if (board[i][j] == ' ')
{
for (int i = 0; i < 3; i++)
if(board[i][0] != ' ')
        if (board[i][0]==board[i][1] && board[i][1]==board[i][2])
         //columns win check
{
        return WIN;
}
for (int i = 0; i < 3; i++)
if(board[i][0] != ' ')
        if (board[0][i]==board[1][i] && board[1][i]==board[2][i])
         //rows win check
{
        return WIN;
}
if(board[0][2] != ' ')
        if (board[0][2]==board[1][i] && board[1][1]==board[2][0])
         //rows win check
{
        return WIN;
}
if(board[0][0] != ' ')
        if (board[0][0]==board[1][1] && board[1][1]==board[2][2])
         //rows win check
{
        return WIN;
}
        return CONTINUE;
}
for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
if (board[i][j] != ' ')
{
        return DRAW;
}
}

//g++ jonathannelsonmain.cpp jonathannelsonTicTacToe.cpp