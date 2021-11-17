#include <iostream>
#include <cstdlib>

using namespace std;

int queen[14];
int count = 0;
int n;

void nqueen(int cur){
    if(cur == n){
        count++;
        return;
    }
    else{
        for(int y = 0; y < n; y++){
            if(cur == 0){
                queen[cur] = y;
                nqueen(cur + 1);
                queen[cur] = 0;
            }
            else{
                for(int i = 0; i < cur; i++){
                    if(abs(cur - i) == abs(y - queen[i]) || queen[i] == y){
                        break;
                    }
                    if(i == cur - 1){
                        queen[cur] = y;
                        nqueen(cur + 1);
                        queen[cur] = 0;
                    }
                }
            }
            
        }
    }

}


int main(){

    ios::sync_with_stdio(false);

    cin >> n;

    if(n == 1){
        cout << 1;
        return 0;
    }


    nqueen(0);

    cout << count;

    return 0;
}