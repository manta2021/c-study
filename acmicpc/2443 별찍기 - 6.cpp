//
//  2443 별찍기 - 6.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/02.
//

#include<stdio.h>
int main(void)
{
    int i, j, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2 * n - 1 - i; j++)
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
