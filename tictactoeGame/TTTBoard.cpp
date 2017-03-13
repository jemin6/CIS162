#include "TTTBoard.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

TTTBoard::TTTBoard() { reset();}
void TTTBoard::playGame()
{
	char player1 = 'X';
	char player2 = 'O';
	char currentPlayer = player1;

    bool isDone = false;

    int r, c;
    int turn = 0;

    while ( isDone == false )
    {
        displayBoard();

        r = getRow();
        c = getColumn();

        if (placeMarker(r, c, currentPlayer) == false) {
            cout << "That spot is occupied!\n";
        } else {
            turn++;
            if ( Win() == true ) {
                cout << "The game is over! Player " << currentPlayer << " has won!\n";
                isDone = true;
            } else if ( turn == 9 ){
                cout << "It's a tie game!\n";
                break;}
            //switching players
            if ( currentPlayer == player1 ) {
                currentPlayer = player2;
            } else {
                currentPlayer = player1;}
        }
    }
}
int TTTBoard::getRow()
{
    bool isInputBad = true;
    int r;

    while(isInputBad == true )
    {
        cout << "Enter the Row: ";
        cin >> r;

        if (r < 1 || r > 3 )
            cout << "Invalid Coordinate!\n";
        else
            isInputBad = false;
    } return r - 1;
}
int TTTBoard::getColumn()
{
    bool isInputBad = true;
    int c;

    while( isInputBad == true )
    {
        cout << "Enter the Column: ";
        cin >> c;

        if (c < 1 || c > 3 )
            cout << "Invalid Coordinate!\n";
        else
            isInputBad = false;
    } return c - 1;
}
void TTTBoard::reset()
{
    for(int i = 0; i < 3; i++)
    for(int j = 0; j < 3; j++)
        board[i][j] = ' ';
}
bool TTTBoard::placeMarker(int r, int c, char currentPlayer)
{
    if( board[c][r] != ' ')
        return false;
    board[c][r] = currentPlayer;
    return true;
}
void TTTBoard::displayBoard() //  displays the current board
{
    cout << endl;
    cout << "     1   2   3" << endl;
    cout << "   +---+---+---+" << endl;
    for ( int i = 0; i <3; i++ )
    {
        cout << i + 1 << "  | " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " | " << endl;
        cout << "   +---+---+---+" << endl;
    }
    cout << endl;

}

char TTTBoard::Win()
{
    //first player
    if ( board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X' ||
         board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X' ||
         board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X' ||
         board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X' ||
         board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X' ||
         board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X' ||
         board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X' ||
         board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X')
        return true; // we won


    //second player
    if ( board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O' ||
         board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O' ||
         board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O' ||
         board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O' ||
         board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O' ||
         board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O' ||
         board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O' ||
         board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O')
        return true;

    return false;
}

