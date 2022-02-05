//
//  2441 별찍기 - 4.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/31.
//

#include<stdio.h>
int main(void)
{
    int i, j, n;
    
    scanf("%d", &n);
    
    for(i = 0;i >= 0 && i < n; i++)
    {
        for(j = 0;j >= 0 && j < n;j++)
        {
            if(j - i < 0)
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
