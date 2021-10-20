#include <stdio.h>

main(){

    int a, max, index;
    for(int i = 1; i < 10; i++){
        scanf("%d ",&a);
        if(i == 1){
            max = a;
            index = 1;
        }
        if(a > max){
            max = a;
            index = i;
        }
    }
    printf("%d\n%d", max, index);
}