//
//  165 확인문제 3.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/18.
//

#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; j++)
        {
            if(n - 1 - i == j || i == j)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
