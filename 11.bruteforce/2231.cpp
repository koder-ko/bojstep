#include <iostream>

using namespace std;

int main()
{

    int d, j, num, min = 1000000;

    cin >> d;

    for (int i = d - 1; i >= 1; i--)
    {
        j = i;
        num = j;
        while (j >= 10)
        {
            num += j % 10;
            j = j / 10;
        }
        num += j;

        if (num == d && min > i)
        {
            min = i;
        }
    }

    if (min != 1000000)
    {
        cout << min;

        return 0;
    }

    cout << 0;

    return 0;
}