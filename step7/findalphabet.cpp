#include <stdio.h>
#include <iostream>

char inputarr[100];
int alphabetarr[26];

main()
{
    scanf("%s", &inputarr);



    for (int i = 0; i < 100; i++)
    {
        if (inputarr[i] == 0){
            break;
        }
        else if (alphabetarr[inputarr[i] - 97] == 0)
        {
            alphabetarr[inputarr[i] - 97] = i + 1;
        }
    
    }

    for (int j = 0; j < 26; j++)
    {

        printf("%d ", alphabetarr[j] - 1);
    }
}