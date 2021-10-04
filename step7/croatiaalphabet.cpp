#include <stdio.h>

char alphabetarr[100];

main(){

    int out = 0;
    scanf("%s", &alphabetarr);

    for(int i = 0; i < 100; i++){
        if(alphabetarr[i] == 0){
            break;
        }
        
        if(alphabetarr[i+1] == '-' || alphabetarr[i+1] == '='){
            i++;
        }
        else if(alphabetarr[i] == 'd' && alphabetarr[i+1] == 'z' && alphabetarr[i+2] == '='){
            i+=2;
        }
        else if(alphabetarr[i+1] == 'j' && (alphabetarr[i] == 'l' || alphabetarr[i] == 'n')){
            i++;
        }
        out++;
    }

    printf("%d", out);

}