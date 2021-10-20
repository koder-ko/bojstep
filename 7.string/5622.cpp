#include <stdio.h>

char dialarr[16];

main(){

    int out = 0;

    scanf("%s", &dialarr);

    for(char cur : dialarr){
        if(cur == 0){
            break;
        }
        cur -= 65;
        out += ((cur)/3 + 3);
        if(cur > 15){
            if(cur % 3 == 0 || cur % 25 == 0){
                out -= 1;
            }
        }
    }

    printf("%d", out);

}