#include <iostream>

using namespace std;

int n, m;

int visit[9];
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
        int i;
        if(cur == 0){
            i = 1;
        }
        else{
            i = print[cur-1] + 1;
        }

        for(i; i <= n; i++){
            if(visit[i] == 0){
                visit[i] = 1;
                print[cur] = i;
                dfs(cur+1);
                visit[i] = 0;
                print[cur] = 0;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);

    cin >> n >> m;


    dfs(0);
}