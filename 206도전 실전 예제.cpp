//
//  206도전 실전 예제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/22.
//

#include <stdio.h>

int rec_func(int n);

int main(void)
{
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n",rec_func(n));
    
    return 0;
}

int rec_func(int n)
{
    if(n == 1){
        return n;
    }
    return rec_func(n-1)+n;
}
