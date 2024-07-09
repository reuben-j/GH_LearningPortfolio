#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int PlayerTurnHeight (char player) {
    int height;
    cout << "Your turn " << player << endl << "From top, would you like row 0, 1 or 2?" << endl;
    cin >> height;
    if(height == 1) {
        height += 1;
    } else if(height == 2) {
        height *= 2;
    }
    return height;
    }

int PlayerTurnWidth (char player) {
    int width;
    cout << "From left to right, would you like column 0, 1 or 2?" << endl;
    cin >> width;
    if(width == 1) {
        width += 1;
    } else if(width == 2) {
        width *= 2;
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
    // available spaces for chars
    // top line -    [0][0] - [0][2] - [0][4]
    // middle line - [2][0] - [2][2] - [2][4]
    // bottom line - [4][0] - [4][2] - [4][4]

vector<vector<char>> board = {
     {' ', '|', ' ', '|', ' '},
     {'-', '+', '-', '+', '-'},
     {' ', '|', ' ', '|', ' '},
     {'-', '+', '-', '+', '-'},
     {' ', '|', ' ', '|', ' '}
    };

gameBoardPrint(board);

for(int i = 0; i < 9; i++) {
    char player;
    if(i % 2 == 0) {
        player = 'X';
    } else {
        player = 'O';
    }
    int turn1Height = PlayerTurnHeight(player);
    int turn1Width = PlayerTurnWidth(player);

    if(board[turn1Height][turn1Width] != ' ') {
        cout << endl << "That spot is taken!" << endl;
    int turn1Height = PlayerTurnHeight(player);
    int turn1Width = PlayerTurnWidth(player);
    } else {
    board[turn1Height][turn1Width] = player;
    gameBoardPrint(board);
    }
}   
}