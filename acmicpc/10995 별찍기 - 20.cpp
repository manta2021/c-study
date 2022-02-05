//
//  10995 별찍기 - 20.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/15.
//

#include <stdio.h>

int main(void)
{
    int j, i, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        if(i % 2 > 0)
        {
            printf(" ");
        }
        for(j = 0; j < n * 2 - 1; j++)
        {
            if(j % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf(" \n");
    }
    
    return 0;
}
