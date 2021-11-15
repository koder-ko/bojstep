#include <iostream>

using namespace std;

int print[9];
int visited[9];
int n;
int m;


void backtracking(int cur){
    if(cur == m){
        for(int i = 0; i < m; i++){
            cout << print[i] << " ";
        }
        cout << "\n";
        return;
    }
    else{
        for(int k = 1; k <= n; k++){
            if(visited[k] == 1){
                continue;
            }
            visited[k] = 1;
            print[cur] = k;
            backtracking(cur + 1);
            visited[k] = 0;
        }
        print[cur] = 0;
    }


}


int main(){

    ios::sync_with_stdio(false);
    cin >> n >> m;

    backtracking(0);

}