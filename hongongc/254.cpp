//
//  254.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/30.
//

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int a = 10, b = 20;
    
    printf("%d, %d\n", a, b);
    
    swap(a, b);
    
    printf("%d, %d\n", a, b);
    
    return 0;
}

void swap(int a, int b)
{
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    printf("%d, %d\n", a, b);
}


