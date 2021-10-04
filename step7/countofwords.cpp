#include <iostream>
#include <istream>

using namespace std;

main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char past = 32;
    string s;

    getline(cin, s);

    int count = 0;

    for (char cur : s)
    {
        if (cur != 32 && past == 32)
        {
            count++;
        }
        past = cur;
    }

    cout << count;
}