#include <stdio.h>

char input[100];

main(){



    int out = 0;
    int length;
    bool real = false;

    scanf("%d", &length);

    for(int i = 0; i < length; i++){
        scanf("%s", &input);
        for(int j = 0; j < 100; j++){
            real = false;
            if(input[j] == 0){
                break;
            }

            for(int k = 1; k < j + 1; k++){
                if(real && input[j-k] == input[j]){
                    out--;
                    input[j+1] = 0;
                    break;
                }

                if(input[j - k] != input[j]){
                    real = true;
                }
            }
        }

        out++;
    }

    printf("%d", out);
}