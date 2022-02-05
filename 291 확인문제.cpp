//
//  291 확인문제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/02.
//

#include <stdio.h>

void print_month(int *mp);

int main(void)
{
    int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    print_month(month);
}

void print_month(int *mp)
{
    int i;
    
    for(i = 1; i < 13; i++)
    {
        printf("%5d ", mp[i - 1]);
        if(i % 5 == 0) printf(" \n");
        
        
    }
}
