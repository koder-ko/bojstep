#include <stdio.h>

main(){
    int a, b, v, result;

    scanf("%d %d %d", &a, &b, &v);
    v -= a;
    if(v <= 0){
        printf("1");
        return 0;
    }

    result = v / (a-b) + 1;

    if(v % (a - b) != 0){
        result++;
    }

    printf("%d", result);


}