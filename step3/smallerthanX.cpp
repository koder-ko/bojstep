#include <stdio.h>

main(){
    int n, x, a;
    scanf("%d %d", &n, &x);
    for(int i = 0; i < n; i++){
        scanf(" %d", &a);
        if(a < x){
            printf("%d ", a);
        }
    
    }
}