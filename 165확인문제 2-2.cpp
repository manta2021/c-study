//
//  165확인문제 2-2.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/18.
//

#include <stdio.h>
int main(void)
{
    int i = 0;
    while(i < 5)
    {
        printf("Be happy\n");
        i++;
    }
    
    printf("loop\n");
    
    i = 0;
    while(true){
        if(i >= 5)break;
        printf("Be happy\n");
        i++;
    }
    return 0;
}
