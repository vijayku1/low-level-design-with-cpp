#include <bits/stdc++.h>
using namespace std;
class TicTacToe
{

public:
    TicTacToe(int n)
    {
        int board[n][n];
    }
    int move(int row, int col, int player)
    {
        board[row][col] = player;
        if (checkrow(row, player) || checkcol(col, player) || (row == col && checkmaindiagonal(player) || (row + col == board.size() - 1) && checkOppositeDiagonal(player)))
        {
            return player;
        }
        return 0;
    }

private:
    bool checkrow(int row, int player)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (broad[row][j] != player)
                return false;
        }
        return true;
    }
    bool checkcol(int col, int player)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][col] != player)
            {
                return false;
            }
        }
        return true;
    }
    bool checkmaindiagonal(int player)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][i] != player)
            {
                return false;
            }
        }
        return true;
    }
    bool checkOppositeDiagonal(int player)
    {
        for (int i = board[0].size() - 1; i >= 0; i--)
        {
            if (board[i][i] != player)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    return 0;
}