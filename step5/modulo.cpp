#include <iostream>

using namespace std;


main(){
    int numArr[10];
    int count = 10;
    for(int i = 0; i < 10; i++){
        cin >> numArr[i];
        for(int k = 0; k < i; k++){
            if((numArr[k] - numArr[i]) % 42 == 0){
                count--;
                break;
            }
        }
    }
    cout << count;
}