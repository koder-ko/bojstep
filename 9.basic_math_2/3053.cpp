#include <stdio.h>


const double pie = 3.141592653589;

int main(){
    int n;

    scanf("%d", &n);

    printf("%.6f\n%.6f", n * n * pie, (double) n * n * 2);



    return 0;
}