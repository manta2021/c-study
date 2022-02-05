//
//  2446 별찍기 - 9.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/06.
//

#include<stdio.h>

int main(void)
{
    int j, i, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n * 2 - 1 - i; j++)
        {
            if(j < i)
            {
                printf(" ");
                
            }
            else
            {
                printf("*");
            }
        }
        
        printf("\n");
    }
    
    
    for(i = i - 2; i >= 0; i--)
    {
        for(j = 0; j < n * 2 - 1 - i; j++)
        {
            if(j < i)
            {
                printf(" ");
                
            }
            else
            {
                printf("*");
            }
        }
        
        printf("\n");
    }
    
    
    return 0;
}
