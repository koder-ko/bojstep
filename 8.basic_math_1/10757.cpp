#include <iostream>

using namespace std;

char output[10001];

main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;
    int last = 0, cur;
    cin >> a >> b;

    for(int i = 0; i < a.length(); i++){
        output[i] = a[a.length() - i - 1];
    }

    

    for(int j = 0; j < 10001; j++){
        if(last == 0 && b.length() <= j){
            break;
        }

        if(output[j] == 0 && (last != 0 || b.length() > j)){
            output[j] += 48;
        }

        cur = output[j] + last - 48;

        if(b.length() > j){
            cur += b[b.length() - 1 - j] - 48;
        }

        output[j] = cur % 10 + 48; 
        last = cur/10;
    }

    for(int k = 0; k < 10001; k++){
        if(output[10000 - k] != 0){
            cout << output[10000 - k];
        }
    }
}