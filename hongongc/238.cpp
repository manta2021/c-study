//
//  238.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/26.
//

#include <stdio.h>

int main(void)
{
    int a;
    int *pa;
    
    pa = &a;
    *pa = 10;
    
    printf("포인터로 a 값 출력 : %d\n", *pa);
    printf("변수형으로 a 값 출력 : %d\n", a);
    
    return 0;
}
