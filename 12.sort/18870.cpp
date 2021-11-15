#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int d;
    cin >> d;
    vector<int> arr(d);

    for (int i = 0; i < d; i++)
    {
        cin >> arr[i];
    }

    vector<int> newarr(arr);
    sort(newarr.begin(), newarr.end());

    newarr.erase(unique(newarr.begin(), newarr.end()), newarr.end());

    for (int k = 0; k < d; k++)
    {
        auto cur = lower_bound(newarr.begin(), newarr.end(), arr[k]);
        cout << cur - newarr.begin() << ' ';
    }

    return 0;
}