#include <stdio.h>

main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("%d\n", n - i);
    }
}