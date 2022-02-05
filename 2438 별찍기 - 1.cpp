//
//  2438 별찍기 - 1.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/18.
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
            if(i >= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
