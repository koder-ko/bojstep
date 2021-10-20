
#include <stdio.h>

int main(){

    long long a, i = 1;

    scanf("%lld", &a);

    if(a == 1){
        printf("1");
        return 0;
    }

    while(true){
        a -= i * 6;
        if(a <= 1){
            printf("%lld", i+1);
            return 0;
        }
        i++;
    }
}