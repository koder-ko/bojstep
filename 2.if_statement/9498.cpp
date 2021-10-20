#include <stdio.h>

main(){
    char score = 65;
    int a;
    scanf("%d",&a);

    if(a == 100){
        printf("A");
    }
    else if(a < 60){
        printf("F");
    }
    else{
        printf("%c", score + (9 - a/10));
    }
}