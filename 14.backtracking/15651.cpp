#include <iostream>

using namespace std;

int n, m;
int print[9];


void dfs(int cur){
    if(cur == m){
        for(int k = 0; k < m; k++){
            cout << print[k] << " "; 
        }

        cout << "\n";
        return;
    }
    else{

        for(int i = 1; i <= n; i++){
            print[cur] = i;
            dfs(cur+1);
            print[cur] = 0;
        }
    }
}

int main(){

    ios::sync_with_stdio(false);

    cin >> n >> m;


    dfs(0);
}