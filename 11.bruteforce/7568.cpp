#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int d, x, y, count;

    vector<int> v;

    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cin >> x >> y;
        v.push_back(x);
        v.push_back(y);
    }

    for (int k = 0; k < d * 2; k += 2)
    {
        x = v[k];
        y = v[k + 1];
        count = 1;
        for (int j = 0; j < d * 2; j += 2)
        {
            if (x < v[j] && y < v[j + 1])
            {
                count++;
            }
        }

        cout << count << " ";
    }
}