#include <iostream>
#include <vector>

using namespace std;

int board[9][9];
vector<pair<int, int>> zero;
int ended;
int cnt = 0;

bool line(int n, int y, int x)
{
    for (int i = 0; i < 9; i++)
    {
        if (n == board[y][i])
        {
            return false;
        }
        if (n == board[i][x])
        {
            return false;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (n == board[i + (y / 3) * 3][k + (x / 3) * 3])
            {
                return false;
            }
        }
    }

    return true;
}

void sudoku(int cur)
{
    if (cur == cnt)
    {
        ended = 1;
        return;
    }

    for (int i = 1; i <= 9; i++)
    {
        if (line(i, zero[cur].second, zero[cur].first))
        {
            board[zero[cur].second][zero[cur].first] = i;
            sudoku(cur+1);
        }

        if (ended == 1)
        {
            return;
        }
        board[zero[cur].second][zero[cur].first] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int cur;

    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            cin >> cur;
            if (cur == 0)
            {
                cnt++;
                zero.push_back({k, i});
            }
            board[i][k] = cur;
        }
    }

    sudoku(0);

    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            cout << board[i][k];

            if (k != 8)
            {
                cout << " ";
            }
        }
        if (i != 8)
        {
            cout << "\n";
        }
    }

    return 0;
}