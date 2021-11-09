#include <iostream>

using namespace std;

int count[10001];

int main()
{

    ios::sync_with_stdio(false);
    int d, cur;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cin >> cur;
        count[cur] += 1;
    }

    for (int k = 0; k < 10001; k++)
    {
        for (int j = count[k]; j > 0; j--)
        {
            cout << k << "\n";
        }
    }

    return 0;
}