// https://vjudge.net/problem/Gym-325692M

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

int n;
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
        solutions.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'Q';
            solveNQueens(row + 1, board);
            board[row][col] = '.';
        }
    }
}


int main() {
    Fast;

    cin >> n;
    vector<string> board(n, string(n, '.'));

    solveNQueens(0, board);

    for (int s = 0; s < (int)solutions.size(); s++) {
        for (string row : solutions[s])
            cout << row << "\n";
        if (s != solutions.size() - 1) cout << "\n";
    }



    return 0;
}
