//
//  2440 별찍기 -  3.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/30.
//

#include<stdio.h>
int main(void)
{
    int i = 0, j = 0;
    int n;
    
    scanf("%d", &n);
    
    for(i = 0;i < n; i++)
    {
        for(j = 0; j < n ; j++)
        {
            if(j + i < n)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
