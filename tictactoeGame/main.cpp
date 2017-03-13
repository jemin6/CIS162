/// Je Min Son. CS162 Class, LAB3. 17/04/2016.


#include <iostream>
#include <stdlib.h>

#include "TTTBoard.h"

using namespace std;
bool yesOrNo( string question);
const string PLAYAGAIN = "Do you want to play Again? (Yes/No) ";

int main()
{
    do{
        TTTBoard game;
        game.playGame();
    } while  ( yesOrNo( PLAYAGAIN ));

    system("PAUSE");
    return 0;
}

bool yesOrNo( string question)
{
    cout << question;
    string answer;
    cin >> answer;
    while (answer != "Yes" and answer != "yes" and answer != "No" and answer != "no" )
    {
        cout << "Invalid response, answer either Yes or No" << endl;
        cin >> answer;
    }
    if (answer == "Yes" or answer == "yes" )
        return true;
    return false;
}

