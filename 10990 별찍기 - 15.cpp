//
//  2525 별찍기 - 15.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/15.
//

#include<stdio.h>

int main(void)
{
    int n, j, i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for(j = 0; j < i * 2 + 1; j++)
        {
            if(j == 0 || j == i * 2)
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
