//
//  바텐더.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/20.
//

#include <stdio.h>

int main(void)
{
    int  tea[1000] = {0,}, i = 0, at[3] = {1, 2, 4};
    int N = 0, turn = 0;
    scanf("%d", &N);
    
    
    
    for(i = 0; i < N; i++)
    {
        scanf("%d", &tea[i]);
    }
    
    if(N == 0 || N == 1)
    {
        printf("0\n");
        return 0;
    }
    
    i = 0;
    while(tea[0] != tea[1])
    {
        
        if(i > 2)
        {
            i = 0;
        }
        if(tea[0] < tea[1])
        {
            tea[0] += at[i];
        }
        
        else
        {
            tea[1] += at[i];
        }
        
        i++;
        if(i > 2)
        {
            i = 0;
        }
        turn += 1;
    }
    
    printf("%d\n", turn);
    
    return 0;
}
