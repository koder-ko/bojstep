#include <stdio.h>

main(){

    int a, i = 2, past = 1; 

    scanf("%d", &a);

    while(1){
        if(past < a){
            past = (i + 1) * (i) / 2;
            if(a <= past){
                if(i % 2 == 0){
                    printf("%d/%d", i - (past - a), 1 + (past - a));
                }
                else{
                    printf("%d/%d", 1 + (past - a), i - (past - a));
                }
                return 0;
            }
        }
        else{
            printf("1/1");
            return 0;
        }
        i++;
    }
}