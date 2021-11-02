#include <iostream>
using namespace std;

main(){
    int x, y, w, h;
    
    cin >> x >> y >> w >> h;
    
    if(w / 2 < x){
        x = w - x;
    }
    
    if(h / 2 < y){
        y = h - y;
    }
    
    if(x < y){
        cout << x;
    }
    else{
        cout << y;
    }
    
    
}