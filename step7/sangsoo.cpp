#include <stdio.h>

int numsangsoo(int num){
    return (num%10) * 100 + (num/10%10) * 10 + (num/100);
}

main(){

    int a, b;

    scanf("%d %d", &a, &b);

    a = numsangsoo(a);
    b = numsangsoo(b);

    if(a > b){
        printf("%d", a);
    }else{
        printf("%d", b);
    }

}