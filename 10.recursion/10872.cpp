#include <iostream>

using namespace std;

int fact(int d){

    if(d == 1 || d == 0){
        return 1;
    }

    return d * fact(d - 1);
}

int main(){
    int d;

    cin >> d;


    cout << fact(d);


}