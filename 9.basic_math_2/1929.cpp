#include <iostream>

using namespace std;


bool isprime(int d){
    
    if(d == 1 || (d % 2 == 0 && d != 2)){
        return false;
    }
    
    if(d == 2){
        return true;
    }
    
    for(int k = 3; k * k <= d; k++){
        if(d % k == 0){
            return false;
        }
    }
    
    
    
    return true;
}


int main(){

    ios::sync_with_stdio(false);

    int a, b;

    cin >> a >> b;

    for(int i = a; i <= b; i++ ){
        if(isprime(i)){
            cout << i << "\n";
        }
    }

    return 0;
}