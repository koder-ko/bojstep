#include <iostream>

using namespace std;

int main()
{

    int N, M, count, min = 64;

    //  N: 줄 수 M: 줄별 인자수
    cin >> N >> M;

    char board[50][50];

    for (int i = 0; i < N; i++)
    {
        cin >> board[i];
    }

    for (int column = 0; column <= N - 8; column++)
    {
        for (int row = 0; row <= M - 8; row++)
        {

            count = 0;

            for (int y = column; y < column + 8; y++)
            {
                for (int x = row; x < row + 8; x++)
                {

                    if ((x + y) % 2 == 0 && board[y][x] != 'W')
                    {
                        count++;
                    }
                    else if ((x + y) % 2 == 1 && board[y][x] != 'B')
                    {
                        count++;
                    }
                }
            }

            if (min > count)
            {
                min = count;
            }

            if (min > 64 - count)
            {
                min = 64 - count;
            }
        }
    }

    cout << min;
}