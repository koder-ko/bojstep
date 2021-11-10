#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b;
    }
    return a.length() < b.length();
}

int main(){

    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    vector<string> arr;

    int d;
    string s;

    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> s;
        if(find(arr.begin(), arr.end(), s) == arr.end()){
            arr.push_back(s);
        }
        
    }

    sort(arr.begin(), arr.end(), compare);


    for(int k = 0; k < arr.size(); k++){
        cout << arr[k] << "\n";
    }




    return 0;
}