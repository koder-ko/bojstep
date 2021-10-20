#include <stdio.h>

main(){
    
    int k;
    
    scanf("%d", &k);
    
    int a = 2 * k;
    int b = -1 * k;
    int min = 2 * k;
    
    while(a >= 0){
        if(b >= 0 && a + b < min){
            min = a + b;
        }
        a -= 5;
        b += 3;
    }
    
    if(min == 2 * k){
        printf("-1");
    }
    else{
        printf("%d", min);
    }
    
   
}