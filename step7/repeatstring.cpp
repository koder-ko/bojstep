#include <stdio.h>
#include <algorithm>
#include <iostream>

char S[20];

main()
{
    int range, repeat;
    scanf("%d", &range);
    for (int i = 0; i < range; i++)
    {
        scanf("%d", &repeat);
        scanf("%s", &S);
        for (int k = 0; k < 20; k++)
        {
            if (S[k] == 0)
            {
                break;
            }
            for (int j = 0; j < repeat; j++)
            {
                printf("%c", S[k]);
            }

            S[k] = 0;
        }

        printf("\n");
    }
}