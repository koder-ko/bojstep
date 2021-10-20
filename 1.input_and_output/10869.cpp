#include <stdio.h>
main(){
    int a, b, c;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n%d\n", a+b, a-b, a * b);
    c = a/b;
    printf("%d\n%d", c, a - b * c);
}