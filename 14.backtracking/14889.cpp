#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;


bool team[20];

int n;

int small = 9999999;

int score[20][20];

void starklink(int idx, int cur){
    if(cur == n/2){
        vector<int> star;
        vector<int> link;
        int s_score = 0;
        int l_score = 0;
        for(int i = 0; i < n; i++){
            if(team[i] == true){
                star.push_back(i);
            }
            else{
                link.push_back(i);
            }
        }

        for(int i = 0; i < n/2; i++){
            for(int j = 0; j < n/2; j++){
                s_score += score[star[i]][star[j]];
                l_score += score[link[i]][link[j]];
            }
        }

        if(small > abs(s_score - l_score)){
            small = abs(s_score - l_score);
        }
        return;
    }
    else{
        for(int i = idx; i < n; i++){
            if(team[i] == false){
                team[i] = true;
                starklink(i, cur+1);
                team[i] = false;
            }
        }
    }

}





int main(){
    ios::sync_with_stdio(false);
    cin >> n;

    int cur;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> cur;
            score[i][j] = cur;
        }
    }

    starklink(0, 0);

    cout << small;
    
}