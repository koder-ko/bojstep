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
    
    int a, b, count = 0, min;
    
    cin >> a;
    
    cin >> b;
    
    for(int i = a; i <= b; i++){
        if(isprime(i)){
            if(count == 0){
                min = i;
            }
            count += i;
        
        }
    }
    if(count == 0){
        cout << -1;
    }
    else{
        cout << count << "\n" << min;
    }
    
    return 0; 
}