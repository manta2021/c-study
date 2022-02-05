//
//  2444 별찍기 - 7.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/02.
//

#include <stdio.h>
int main(void)
{
    int j, i, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        {
            for(j = 0; j < n * 2 - 1; j++)
                {
                    if(j < n - i - 1)
                    {
                        printf(" ");
                    }
            
                    else if(j < i + n)
                    {
                        printf("*");
                    }
                }
            printf("\n");
        }
    
    for(i = i - 2; i > 0; i--)
    {
        for(j = 0; j < n * 2 - 1; j++)
            {
                if(j < n - i - 1)
                {
                    printf(" ");
                }
        
                else if(j < i + n)
                {
                    printf("*");
                }
            }
        printf("\n");
    }

    return 0;
}
