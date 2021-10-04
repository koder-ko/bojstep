#include <stdio.h>

main(){

    int n, max, min, a;
    scanf("%d ",&n);
    for(int i = 0; i < n; i++){
        scanf("%d ",&a);
        if(i == 0){
            max = a;
            min = a;
        }
        if(a > max){
            max = a;
        }

        if(a < min){
            min = a;
        }
    }
    printf("%d %d", min, max);
}