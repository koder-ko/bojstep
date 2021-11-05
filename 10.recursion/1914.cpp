#include <iostream>

using namespace std;

void hanoi(int cur, int count, int dest){

    ios:: sync_with_stdio(false);
    
    if(count == 1){
        cout << cur << " " << dest << "\n";
        return;
    }

    hanoi(cur, count-1, 6 - (dest + cur));

    cout << cur << " " << dest << "\n";

    hanoi(6 - (dest + cur), count - 1 , dest);

}

int main(){

    
    int d, k = 1;

    cin >> d;

    for(int i = 0; i < d; i++){
        k *= 2;
    }

    cout << k - 1 << "\n";

    hanoi(1, d, 3);
}