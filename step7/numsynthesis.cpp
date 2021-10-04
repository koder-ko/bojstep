#include <stdio.h>

main(){

    int l, out = 0;
    scanf("%d", &l);

    char num[l] = {0, };

    scanf("%s", &num);

    for(char x : num){
        out += x - 48;
    }

    printf("%d", out);

}