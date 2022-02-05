//
//  2439 별찍기 - 2.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/29.
//

#include<stdio.h>
int main(void)
{
    int i,j;
    int n;
    scanf("%d", &n);
    for(i = 0;i >= 0 && i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j + i >= n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
