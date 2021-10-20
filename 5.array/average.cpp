#include <iostream>

using namespace std;


main(){
    double av;
    int k, num, max;

    cin >> k;

    for(int i = 0; i < k; i++){
        cin >> num;
        av += num;
        
        if(i == 0 || max < num){
            max = num;
        }
    }
    cout << av / max / k * 100;
}