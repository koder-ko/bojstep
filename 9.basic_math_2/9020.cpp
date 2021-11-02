#include <iostream>

using namespace std;

int isprime[10001];

int main()
{

    isprime[1] == -1;

    for (int i = 2; i < 10001; i++)
    {
        if (isprime[i] == 0)
        {
            for (int k = i + 1; k < 10001; k++)
            {
                if (k % i == 0)
                {
                    isprime[k] = -1;
                }
            }
        }
    }

    int t, d;

    cin >> t;

    for (int j = 0; j < t; j++)
    {

        int a = 0, b = 0;
        cin >> d;

        for (int l = 2; l <= d; l++)
        {

            if (isprime[l] == 0 && isprime[d - l] == 0)
            {

                if (d - 2 * l < 0)
                {
                    break;
                }

                a = l;
                b = d - l;
            }
        }

        cout << a << " " << b << "\n";
    }
}