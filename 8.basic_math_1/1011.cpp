#include <iostream>

using namespace std;

int shortestway(int d, int n)
{

    if(d < (n + 2)){
        if(d == 0){
            return 0;
        }

        if(d <= ((n + 2) / 2)){
            return 1;
        }
        else{
            return 2;
        }

    }

    n += 2;

    return 2 + shortestway(d - n, n);
}

main()
{

    int count;

    cin >> count;

    for (int i = 0; i < count; i++)
    {

        int a, b;

        cin >> a >> b;

        int d;

        d = b - a;
        
        cout << shortestway(d, 0) << "\n";
    }
}