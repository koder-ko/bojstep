#include <iostream>

using namespace std;

int fibo(int d){
    if(d == 0 || d == 1 ){
        return d;
    }
    return fibo(d - 1) + fibo(d - 2);
}

int main(){

    int d;
    cin >> d;

    cout << fibo(d);


    return 0;
}