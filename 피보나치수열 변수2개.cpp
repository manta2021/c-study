//
//  피보나치수열 변수2개.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>

int main(void)
{
    unsigned long long i, j ,n, q;
    unsigned long long temp = 0;
    j = 1;
    q = j;
    scanf("%ul", &n);
    
    for(i = 0; i < n - 1; i++)
    {
        temp = j;
        j = j + q;
        q = temp;
    }
    
    printf("%ul\n", q);
    
    return 0;
}
