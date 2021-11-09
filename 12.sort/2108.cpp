#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

int count[8001];

int main(){

    vector<int> v;
    vector<int> a;

    int d, add = 0, cur, max = -4000, min = 4001, isin = true;

    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> cur;
        add += cur;
        count[cur + 4000] += 1;
        if(max < cur){
            max = cur;
        }
        if(min > cur){
            min = cur;
        }
    }

    min = max - min;

    cout << round((float) add / d) << "\n";

    max = 0;

    add = d / 2;

    for(int k = 0; k < 8001; k++){
        if(isin){
            if(add < count[k]){
                cur = k - 4000;
                isin = false;
            }
            add -= count[k];
        }

        if(max < count[k]){
            max = count[k];
        }
    }

    cout << cur << "\n";

    for(int j = 0; j < 8001; j++){
        if(count[j] == max){
            a.push_back(j - 4000);
        }
    }

    if(a.size() > 1){
        cout << a[1] << "\n";
    }
    else{
        cout << a[0] << "\n";
    }



    cout << min << "\n";
}