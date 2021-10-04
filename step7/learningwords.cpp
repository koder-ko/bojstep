#include <iostream>

using namespace std;

int alphabet[26];

main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int c, isrepeat = -1, read;

    string input;

    cin >> input;
    
    for(char cur : input){
        c = cur - 65;
        if(c >= 32){
            c -= 32;
        }
        alphabet[c] += 1;
    }

    c = 0;

    for(int i = 0; i < 26; i++){
        if(alphabet[i] > c){
            c = alphabet[i];
            read = i;
        }
    }

    for(int j = 0; j < 26; j++){
        if(alphabet[j] == c){
            isrepeat += 1;
        }
    }

    if(isrepeat >= 1){
        cout << "?";
    }
    else{
        cout << (char)(read + 65);
    }
}