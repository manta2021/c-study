//
//  171.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/17.
//

#include<stdio.h>
int main(void)
{
    int i;
    int sum = 0;
    
    for(i = 1; i <= 10; i++)
    {
        sum += i;
        if(sum > 30)break;
    }
    printf("누적한 값 : %d\n", sum);
    printf("마지막으로 더한 값 : %d\n", i);
    return 0;
}
