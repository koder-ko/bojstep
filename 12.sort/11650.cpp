#include <iostream>

using namespace std;

int list[10000];

int main()
{

    int d, cur;
    cin >> d;

    for (int i = 0; i < d; i++)
    {
        cin >> cur;

        list[i] = cur;
    }

    return 0;
}