//
//  204 확인문제2.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/20.
//

#include<stdio.h>

void sum(int);
void sum(double,int);

int main(void)
{
    int a;
    
    scanf("%d", &a);
    sum(a);
    
    return 0;
}

void sum(int b)
{
    int tot, i;
    
    for(i = 1, tot = 0; i <= b; i++)
    {
        tot = tot + i;
    }
    
    printf("1부터 %d까지의합은 %d입니다.\n", b, tot);
}
