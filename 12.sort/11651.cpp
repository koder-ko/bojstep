#include <iostream>
#include <algorithm>

using namespace std;



int main()
{
    ios :: sync_with_stdio(false);
    
    pair<int, int>  arr[100000];

    int d, x, y;
    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> x >> y;
        arr[i] = {y, x};
    }
    

    sort(arr, arr + d);

    for(int k = 0; k < d; k++){
        cout << arr[k].second << " " << arr[k].first << "\n";
    }
    

    return 0;
}