#include <stdio.h>

bool ishansoo(int a){
    int n = (a / 10) % 10 - a % 10;
    for(int i = 10; a / i >= 10; i *= 10){
        if((a / (i * 10)) % 10 - (a/i) % 10 != n){
            return false;
        }
    }
    return true;
}

main(){
    int lim;
    int out = 0;

    scanf("%d", &lim);

    for(int i = 1; i < lim + 1; i++){
        out += ishansoo(i);
    }

    printf("%d", out);
}