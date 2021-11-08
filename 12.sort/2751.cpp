#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    ios::sync_with_stdio(false);

    int d, cur;

    vector<int> v;

    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> cur;
        v.push_back(cur);
    }

    sort(v.begin(), v.end());

    for(int k = 0; k < d; k++){
        cout << v[k] << "\n";
    }
    
}