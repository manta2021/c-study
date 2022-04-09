//
//  피보나치 수열.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>

int fibonachi(int i)
{
    if(i < 2)
    {
        return i;
    }
    return fibonachi(i - 1) + fibonachi(i - 2);
}

int main(void)
{
    int a;
    
    scanf("%d", &a);
    
    printf("%d\n", fibonachi(a));
    
    return 0;
}
