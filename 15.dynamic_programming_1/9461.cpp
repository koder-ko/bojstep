#include <iostream>

using namespace std;

long long padomemo[101] = {0, 1, 1, 1};


long long pado(int cur){

    if(padomemo[cur] != 0){
        return padomemo[cur];
    }
    else{
        padomemo[cur] = pado(cur - 3) + pado(cur - 2);
        return padomemo[cur];
    }

}

int main(){
    ios::sync_with_stdio(false);
    int d, c;
    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> c;
        cout << pado(c) << "\n";
    }


    return 0;
}