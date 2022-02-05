//
//  150.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/11.
//

#include<stdio.h>
int main(void)
{
    int n;
    printf("정수입력 : ");
    scanf("%d", &n);
    switch(n % 3)
    {
    case 0:
        printf("거짓\n");
        break;
    default:
        printf("참\n");
        break;
    }
    return 0;
}
