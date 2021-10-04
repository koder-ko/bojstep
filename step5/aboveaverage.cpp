#include <stdio.h>
#include <math.h>

using namespace std;

main(){
    double av, out;
    int sc, t1, t2, j;
    int student[1000] = {0, };

    

    scanf("%d", &t1);

    for(int i = 0; i < t1; i++){
        av = 0;
        out = 0;
        scanf("%d", &t2);
        
        for(j = 0; j < t2; j++){
            scanf("%d", &sc);
            av += sc;
            student[j] = sc;
        }

        av /= t2;

        for(j = 0; j < t2; j++){
            if((student[j] - av) > 1e-4){
                out++;
            }
        }
        printf("%.3f%\n", out/t2 * 100);
    }

}