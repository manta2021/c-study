//
//  7572간지(축소).cpp
//  c++ study
//
//  Created by 김혜준 on 2022/07/09.
//

#include <stdio.h>

int main(void)
{
    int a;
    
    scanf("%d", &a);
    
    printf("%c%d\n", 'A' + (a+8) % 12, (a + 6) % 10);
    
    return 0;
}
