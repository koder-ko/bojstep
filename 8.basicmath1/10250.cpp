#include <stdio.h>

main(){

    int t, h, w, i;
    scanf("%d", &t);

    for(int j = 0; j < t; j++){
        scanf("%d %d %d", &h, &w, &i);
        if(i % h == 0){
            printf("%d\n",h * 100 + i/h);
        }
        else{
            printf("%d\n",i%h * 100 + i/h+1);
        }
    }


}