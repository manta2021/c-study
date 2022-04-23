//
//  148p 4개수 고르기.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/04/09.
//
#include <stdio.h>

int main(void)
{
    int i, j, k, n, l;
    
    scanf("%d", &n);
    
    
        for( i = 0; i < n; ++i)
        {
            for(j = i + 1; j < n; ++j)
            {
                for(k = j + 1; k < n; ++k)
                {
                    for(l = k + 1; l < n; ++l)
                    {
                        printf("%d %d %d %d\n", i, j, k, l);
                    }
                }
            }
        }
    
    return 0;
}
