#include <iostream>

using namespace std;

int main(){

    int t;

    int x1, x2, y1, y2, r1, r2;
    int distance, plus, minus;

    cin >> t;

    while(t--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        distance = (x1-x2) * (x1-x2) + (y1 - y2) * (y1 - y2);

        plus = (r1 + r2) * (r1 + r2);
        minus = (r1 - r2) * (r1 - r2);

        if(distance == 0 && minus == 0){
            cout << -1;
        }
        else if(distance == 0){
            cout << 0;
        }
        else if(plus == distance || minus == distance){
            cout << 1;
        }
        else if(plus > distance && distance > minus){
            cout << 2;
        }
        else{
            cout << 0;
        }


        cout << "\n";
    }
    return 0;
}
