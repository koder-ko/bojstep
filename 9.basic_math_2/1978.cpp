#include <iostream>

using namespace std;

int main(){
    int n, cur, count;
    
    cin >> n;
    
    count = n;
    
    for(int i = 0; i < n; i++){
        cin >> cur;
        
        if((cur % 2 == 0 && cur != 2) || cur == 1){
            count--;
            continue;
        }
        
        for(int k = 3; k * k <= cur; k++){
            if(cur % k == 0){
                count--;
                break;
            }
        }
    }
    
    cout << count; 
    
    
    
    
    return 0;
    
}