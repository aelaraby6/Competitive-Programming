
// https://vjudge.net/problem/CSES-1624


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n = 8 ,c=0;
vector<vector<string>> solutions;

bool isSafe(vector<string>& board, int row, int col) {
    // Check column
    for (int i = 0; i < row; i++)
        if (board[i][col] == 'Q') return false;

    // Check left upper diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q') return false;

    // Check right upper diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q') return false;


    return true;
}

void solveNQueens(int row, vector<string>& board) {
    if (row == n) {
        c++;
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col) && board[row][col] != '*') {
            board[row][col] = 'Q';
            solveNQueens(row + 1, board);
            board[row][col] = '.';
        }
    }
}


int main() {
    Fast;

    vector<string> board(8);
    for (int i = 0; i < 8; i++)
        cin >> board[i];

    solveNQueens(0, board);

    cout << c << "\n";
    return 0;
}
