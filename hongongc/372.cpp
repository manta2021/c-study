//
//  372.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/05.
//

#include <stdio.h>

void add_ten(int a);

int main(void)
{
    int a = 10;
    
    add_ten(a);
    printf("a : %d\n", a);;
    
    return 0;
}

void add_ten(int a)
{
    a = a + 10;
}
