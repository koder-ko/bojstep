#include <iostream>

using namespace std;



bool isprime(int d){
    
    for(int k = 2; k * k <= d; k++){
        if(d % k == 0){
            return false;
        }
    }
    
    
    
    return true;
}

int main(){

    int d, count = 0;

    while(true){

        cin >> d;

        if(d == 0){
            break;
        }

        for(int i = d + 1; i <= 2 * d; i++){
            if(isprime(i)){
                count++;
                if(i != 2){
                    i++;
                }
            }
        }

        cout << count << "\n";

        count = 0; 
    }    
}