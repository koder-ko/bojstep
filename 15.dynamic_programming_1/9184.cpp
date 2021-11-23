#include <iostream>

using namespace std;

int memory[101][101][101];

int w(int a, int b, int c)
{
    int cur;
    if (memory[a + 50][b + 50][c + 50] != -1)
    {
        return memory[a + 50][b + 50][c + 50];
    }

    if (a <= 0 || b <= 0 || c <= 0)
    {
        cur = 1;
    }
    else if (a > 20 || b > 20 || c > 20)
    {
        cur = w(20, 20, 20);
    }
    else if (a < b && b < c)
    {
        cur = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    }
    else
    {
        cur = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }

    memory[a + 50][b + 50][c + 50] = cur;

    return cur;
}

int main()
{
    int a, b, c;
    for(int i = 0; i < 101; i++){
        for(int k = 0; k < 101; k++){
            for(int j = 0; j < 101; j++){
                memory[i][k][j] = -1;
            }
        }
    }
    ios::sync_with_stdio(false);
    while (true)
    {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1)
        {
            break;
        }
        cout << "w(" << a << ", " << b << ", " << c<< ") = "<< w(a, b, c) << "\n";
    }
    return 0;
}