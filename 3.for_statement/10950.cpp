#include <stdio.h>

main(){
    int t, a, b;
    int numplus[t]; 

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}