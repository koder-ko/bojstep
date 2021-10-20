#include <stdio.h>
int identify(int x){
    return (int) (x > 0);
}


main(){
    int a, b;
    scanf("%d\n%d", &a, &b);

    if(identify(b) == 0){
        printf("%d", 3 + identify(a));
    }
    else if(identify(b) == 1){
        printf("%d", 2 - identify(a));
    }

}