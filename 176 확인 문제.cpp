//
//  176 확인 문제.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/17.
//

#include<stdio.h>
int main(void)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Be happy~\n");
            if( j == 2)break;
        }
    }
    
    return 0;
}
