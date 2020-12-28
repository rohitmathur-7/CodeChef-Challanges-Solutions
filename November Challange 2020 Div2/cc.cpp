#include <stdio.h>
    int main()
    {
 
        int i, j, a, number[4];
        for (i = 0; i < 4; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < 4; ++i) 
        {
 
            for (j = i + 1; j < 4; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        for (i = 0; i < 4; ++i)
            printf("%d ", number[i]);
 
    }
