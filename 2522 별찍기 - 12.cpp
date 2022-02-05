//
//  2522 별찍기 - 12.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/11.
//

#include<stdio.h>
int main(void)
{
    int i, j, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf(" \n");
    }
    
    for(i = i - 2; i >= 0; i--)
    {
        for(j = 0; j < n; j++)
        {
            if(j < n - i - 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf(" \n");
    }
    
    return 0;
}
