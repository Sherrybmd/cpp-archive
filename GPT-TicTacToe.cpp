#include <iostream>  
#include <vector>  

using namespace std;  

class TicTacToe {  
public:  
    TicTacToe() {  
        board = vector<vector<char>>(3, vector<char>(3, ' '));  
        currentPlayer = 'X'; // Player 1 starts as 'X'  
    }  

    void playGame() {  
        int moveCount = 0;  
        while (moveCount < 9) {  
            displayBoard();  
            int row, col;  
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";  
            cin >> row >> col;  

            if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {  
                cout << "Invalid move. Try again." << endl;  
                continue;  
            }  

            board[row][col] = currentPlayer; // Place the mark  
            moveCount++;  

            if (checkWin()) {  
                displayBoard();  
                cout << "Player " << currentPlayer << " wins!" << endl;  
                return;  
            }  

            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch players  
        }  

        displayBoard();  
        cout << "It's a draw!" << endl;  
    }  

private:  
    vector<vector<char>> board;  
    char currentPlayer;  

    void displayBoard() {  
        cout << "Current Board:" << endl;  
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 3; j++) {  
                cout << board[i][j];  
                if (j < 2) cout << "|";  
            }  
            cout << endl;  
            if (i < 2) cout << "-----" << endl;  
        }  
    }  

    bool checkWin() {  
        // Check rows, columns, and diagonals  
        for (int i = 0; i < 3; i++) {  
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||  
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {  
                return true;  
            }  
        }  
        if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||  
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {  
            return true;  
        }  
        return false;  
    }  
};  

int main() {  
    TicTacToe game;  
    game.playGame();  
    return 0;  
}