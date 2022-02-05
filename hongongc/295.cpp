//
//  295.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/03.
//

#include <stdio.h>

int main(void)
{
    char small, cap = 'G';
    
    if((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }
    printf("대문자 : %c %c", cap, '\n');
    printf("소문자 : %c\n", small);;
    
    return 0;
    
}
