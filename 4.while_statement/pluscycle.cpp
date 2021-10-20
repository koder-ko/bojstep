#include <stdio.h>

main(){
    int n, c, count;
    scanf("%d", &n);
    count = 0;
    c = n;
    while(true){
        c = 10 * (c % 10) + (c % 10 + c/10) % 10;
        count += 1;
        if(c == n){
            break;
        }
    }

    printf("%d", count);
}
