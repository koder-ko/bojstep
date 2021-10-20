#include <stdio.h>

main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a - b > 0){
        printf(">");
    }
    else if(a == b){
        printf("==");
    }
    else{
        printf("<");
    }
}