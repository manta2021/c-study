//
//  357.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/22.
//

#include <stdio.h>

void assign(void);

int main(void)
{
    auto int a = 0;
    
    assign();
    printf("main 함수 a : %d\n", a);
    
    return 0;
}

void assign(void)
{
    int a;
    
    a = 10;
    printf("assign 함수 a : %d\n", a);
}
