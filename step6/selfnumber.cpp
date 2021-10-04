// 1001 101 11 2
#define FOR(i) for(int i=0;i<10;i++)
#include <stdio.h>

bool isselfnum(int a){
    FOR(i)
        FOR(j)
            FOR(k)
                FOR(s){
                    int n = a - 1001 * i - 101 * j - 11 * k - 2 * s;
                    if(n == 0){
                        return false;
                    }
                        
                }
    return true;
}

main(){
    for(int i = 1; i < 10000; i++){
        if(isselfnum(i)){
            printf("%d\n", i);
        }
    }
}