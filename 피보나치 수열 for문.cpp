//
//  피보나치 수열 for문.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>

int main(void)
{
    int i, n, j[100];
    j[0] = 1;
    j[1] = 1;
    scanf("%d", &n);
    
    for(i = 2; i <= n; i++)
    {
        j[i] = j[i - 1] + j[i - 2];
    }
    
    printf("%d\n", j[n - 1]);
}
