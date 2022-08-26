//
//  모기퇴치.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/20.
//

#include <stdio.h>

int main(void)
{
    int N = 0, M = 0, i = 0,j = 0 , vil[100][100] = {0,}, max = -1 ;
    
    scanf("%d %d", &N, &M);
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &vil[i][j]);
        }
    }
    
    
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(vil[i][j] > max)
            {
                max = vil[i][j];
            }
        }
    }
    
    printf("%d\n", max);
    
    return 0;
}
