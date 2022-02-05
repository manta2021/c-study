//
//  254.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/30.
//

#include <stdio.h>

void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;
    
    printf("%d, %d\n", a, b);
    
    swap(&a, &b);
    
    printf("%d, %d\n", a, b);
    
    return 0;
}

void swap(int *pa, int *pb)
{

    *pa = *pa - *pb;
    *pb = *pa + *pb;
    *pa = *pb - *pa;
    
}


