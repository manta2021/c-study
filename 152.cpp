//
//  152.cpp
//  c++ study
//
//  Created by 김혜준 on 2021/12/11.
//

#include<stdio.h>
int main(void)
{
    int a, c;
    char b;
    printf("사칙연산 입력(정수) : ");
    scanf("%d%c%d", &a,&b,&c);
    
    if(b == '+')
    {
        printf("%d + %d = %d\n", a, c, a + c);
    }
    if(b == '-')
    {
        printf("%d - %d = %d\n", a, c, a - c);
    }
    if(b == '/')
    {
        printf("%d / %d = %.2lf\n",a , c, (double)a / c);
    }
    if(b == '*')
    {
        printf("%d * %d = %d\n", a, c, a * c);
    }
    return 0;
}
