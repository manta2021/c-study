//
//  236.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/26.
//

#include <stdio.h>

int main(void)
{
    int a;
    double b;
    char c;
    
    //scanf("%d %lf %c", &a, &b, &c);
    //int aaddress = &a;
    
    
    printf("%d\n", a);
    
    printf("int형 변수의 주소 : %u\n", &a);
    printf("double형 변수의 주소 : %u\n", &b);
    printf("char형 변수의 주소 : %u\n", &c);
    
    return 0;
    
}
