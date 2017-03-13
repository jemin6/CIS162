#ifndef TTTBOARD_H
#define TTTBOARD_H
#include <string>
using namespace std;

class TTTBoard
{
    public:
        TTTBoard();
        void playGame();
        char Win();
        void reset(); //Empties the board
        void displayBoard(); //  Prints the board


    private:
        char board[3][3];
        int getRow();
        int getColumn();
        bool placeMarker(int x, int y, char currentPlayer);
};

#endif // TTTBOARD_H

