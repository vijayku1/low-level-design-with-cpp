#include <bits/stdc++.h>
using namespace std;
class TicTacToe
{
    int board[][];

public:
    TicTacToe(int n)
    {
        int board[n][n];
    }
    int move(int row, int col, int player)
    {
        board[row][col] = player;
        if (checkrow(row, player) || check(col, player) || (row == col && checkmaindiagonal(player) || (row + col == board.size() - 1) && checkOppositeDiagonal(player)))
        {
            return player;
        }
        return 0;
    }

private:
    bool checkrow(int row, int player)
    {
    }
} int main()
{

    return 0;
}