#include <iostream>

using namespace std;

int main()
{

    ios ::sync_with_stdio(false);

    int a, b, c;

    while (true)
    {
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c == 0){
            break;
        }

        if (a < c && b < c)
        {
            if (a * a + b * b == c * c)
            {
                cout << "right\n";
                continue;
            }
        }
        else if (c < b && a < b)
        {
            if (c * c + a * a == b * b)
            {
                cout << "right\n";
                continue;
            }
        }
        else
        {
            if (c * c + b * b == a * a)
            {
                cout << "right\n";
                continue;
            }
        }

        cout << "wrong\n";
    }

    return 0;
}