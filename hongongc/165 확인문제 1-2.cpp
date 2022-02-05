//
//  165 확인문제 1-2.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/18.
//

#include<stdio.h>
int main(void)
{
    int a;
    for(a = -1;a < 0;)
    {
        scanf("%d", &a);
    }
    printf("\ninfinite loop version\n");
    
    int b = 0;
    for(;;){
        scanf("%d",&b);
        if(b >= 0) break;
    }
    
    return 0;
}
