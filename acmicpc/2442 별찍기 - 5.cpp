//
//  2442 별찍기 - 5.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/02.
//

#include <stdio.h>
int main(void)
{
    int i, j, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n * 2 - 1; j++)
        {
            if(j < n - i - 1)
            {
                printf(" ");
            }
            
            else if(j < i + n)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}
