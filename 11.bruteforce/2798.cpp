#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    ios::sync_with_stdio(false);

    int d, x, cur;

    cin >> d >> x;

    for (int i = 0; i < d; i++)
    {
        cin >> cur;
        v.push_back(cur);
    }

    int max = 0, num;

    for (int k = 0; k < d; k++)
    {
        for (int j = k + 1; j < d; j++)
        {
            for (int f = j + 1; f < d; f++)
            {
                num = v[k] + v[j] + v[f];
                if (num > max && num <= x)
                {
                    max = num;
                }
            }
        }
    }

    cout << max;

    return 0;
}