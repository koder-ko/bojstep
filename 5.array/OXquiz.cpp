#include <stdio.h>

main(){
    int score, combo, n;
    char c[80] = {0, };

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", &c);
        score = 0;
        combo = 1;
        for(int j = 0; j < 80; j++){
            if(c[j] == 0){
                break;
            }

            if(c[j] == 'O'){
                score += combo;
                combo++;
            }
            else{
                combo = 1; 
            }
        }

        printf("%d\n", score);
    }
}