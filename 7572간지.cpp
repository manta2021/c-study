//
//  7572간지.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/07/02.
//

#include <stdio.h>

int main(void)
{
    int a;
    int arr1[12] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'};
    
    scanf("%d", &a);
    
    int b = a % 12 + 8;
    if(b >= 12)
    {
        b = b - 12;
    }
    
    int c = a % 10 - 4;
    if(c < 0)
    {
        c = 10 + c;
    }
    printf("%c%d\n", arr1[b], c);
    
    return 0;
    
}
