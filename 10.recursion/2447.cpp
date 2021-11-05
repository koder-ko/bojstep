#include <iostream>

using namespace std;

void star(int line, int cur, int d){
    if((line / d) % 3 == 1 && (cur/d) % 3 == 1){
        cout << " ";
    }
    else if(d / 3 == 0){
        cout << "*";

    }
    else{
        star(line, cur, d/3);
    }

    

}

int main(){
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int d;

    cin >> d;

    for(int line = 0; line < d; line++){
        for(int cur = 0; cur < d; cur++){
            star(line, cur, d);
        }
        cout << "\n";
    }
    return 0;
}