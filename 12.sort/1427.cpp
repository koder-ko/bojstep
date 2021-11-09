#include <iostream>

using namespace std;
int count[10];

int main()
{
    ios::sync_with_stdio(false);

    string n;

    cin >> n;

    for (char a : n)
    {
        count[a - '0'] += 1;
    }

    for (int i = 9; i >= 0; i--)
    {
        for (int k = count[i]; k > 0; k--)
        {
            cout << i;
        }
    }
}