//
//  피보나치 수열 메모라이즈.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>
unsigned long long memorized[10000] = {0,};
unsigned long long fibonachi(unsigned long long i)
{
    if(i < 2)
    {
        return i;
    }
    if(memorized[i-1] == 0){
        memorized[i-1] = fibonachi(i - 1) + fibonachi(i - 2);
    }
    return memorized[i-1];
}


int main(void)
{
    int a;
    
    scanf("%d", &a);
    
    printf("%ul\n", fibonachi(a));
    
    return 0;
}
