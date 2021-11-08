#include <iostream>


using namespace std;

int main(){

    ios::sync_with_stdio(false);
    
    int d, cur, x;

    int array[1000];

    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> array[i];
    }

    for(int j = 0; j < d; j++){
        cur = j;


        for(int k = j-1; k >=0; k--){
            if(array[cur] > array[k]){
                 
                break;
            }
            else{
                x = array[cur];
                array[cur] = array[k];
                array[k] = x;

                cur--;
                
            }
        }
    }



    for(int l = 0; l < d; l++){
        cout << array[l] << "\n";
    }




}