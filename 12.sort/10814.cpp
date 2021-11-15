#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false);
    int d;
    string s;

    cin >> d;
    
    pair<int, string> tmp;
    vector<pair<int, string>> arr;

    for(int i = 0; i < d; i++){
        cin >> tmp.first >> tmp.second;
        arr.push_back(tmp);
    }

    stable_sort(arr.begin(), arr.end(), compare);

    for(int k = 0; k < d; k++){
        cout << arr[k].first << " " << arr[k].second << "\n";
    }
    return 0;

}