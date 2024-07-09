#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int PlayerTurnHeight (char player) {
    int height;
    cout << "Your turn " << player << ":" << endl << "From top, would you like row 1, 2 or 3?" << endl;
    cin >> height;
    if(height <= 1) {
        height = 0;
    } else if(height == 2) {
        height = 2;
    } else if(height >=3) {
        height = 4;
    }
    return height;
    }

int PlayerTurnWidth (char player) {
    int width;
    cout << "From left to right, would you like column 1, 2 or 3?" << endl;
    cin >> width;
    if(width <= 1) {
        width = 0;
    } else if(width == 2) {
        width = 2;
    } else if(width >= 3) {
        width = 4;
    }
    return width;
    }

vector<vector<char>> gameBoardPrint(vector<vector<char>> gameBoard) {
    cout << endl << endl << "------" << endl;
    for(auto i : gameBoard) {
        cout << endl;
        for(auto y : i) {
            cout << y ;
        }
    }
    cout << endl << endl << "------" << endl;
    return gameBoard;
}

int main() {
    char player1, player2;
    cout << "First player, what character would you like to use? ";
    cin >> player1;
    cout << "Second player, what character would you like to use? ";
    cin >> player2;
    

vector<vector<char>> board = {
     {' ', '|', ' ', '|', ' '},
     {'-', '+', '-', '+', '-'},
     {' ', '|', ' ', '|', ' '},
     {'-', '+', '-', '+', '-'},
     {' ', '|', ' ', '|', ' '}
    };

gameBoardPrint(board);
// loop through 9 turns to fill each spot 
for(int i = 0; i < 9; i++) {
    char player;
    if(i % 2 == 0) { //even
        player = player1;
    } else {
        player = player2;
    }
    int turn1Height = PlayerTurnHeight(player);
    int turn1Width = PlayerTurnWidth(player);

    if(board[turn1Height][turn1Width] != ' ') {
        cout << endl << "**************************" << endl << endl <<
        "That spot is taken!" << endl;

    int turn1Height = PlayerTurnHeight(player);
    int turn1Width = PlayerTurnWidth(player);
    } 

    board[turn1Height][turn1Width] = player;
    gameBoardPrint(board);
    if(i == 8) {
        cout << "Its a draw!";
        break;
    }
}   
}