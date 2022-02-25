//
//  366.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/25.
//

#include <stdio.h>

int main(void)
{
    register int i;
    auto int sum = 0;
    
    for(i = 0; i <= 10000; i++)
    {
        sum += i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
