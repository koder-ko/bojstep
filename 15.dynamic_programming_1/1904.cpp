#include <iostream>

using namespace std;

int memo[1000001];

int tile(int len)
{
    int count = 0;
    if (len == 0)
    {
        return 1;
    }
    else{
        if (memo[len] != 0)
        {
            return memo[len];
        }
        else
        {
            if(len >= 2){
                count += tile(len - 2) ;
            }
            
            count += tile(len - 1) ;
            count %=15746;

            memo[len] = count; 
            return count;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    int n;

    cin >> n;

    cout << tile(n) % 15746;

    return 0;
}