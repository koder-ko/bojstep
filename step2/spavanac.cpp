#include <stdio.h>

main(){
    int h, m, n;
    scanf("%d %d", &h, &m);
    n = h * 60 + m - 45;
    if(n < 0){
        n += 1440;
    }
    printf("%d %d", n/60, n%60);
}