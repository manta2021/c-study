//
//  307.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/03.
//

#include <stdio.h>

int main(void)
{
    int res;
    char ch;
    
    while(1)
    {
        res = scanf("c", &ch);
        if (res == -1) break;
        printf("%d", ch);
    }
    
    return 0;
}
