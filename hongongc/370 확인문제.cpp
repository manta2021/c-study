//
//  370 확인문제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/25.
//

#include <stdio.h>

int func(void);

int main(void)
{
    int i, sum = 0;
    
    for (i = 0; i < 10; i++)
    {
        sum += func();
        
    }
    
    printf("%d", sum);
    return 0;
}

int func(void)
{
    register int a = 0;
    a++;
    return a;
}
