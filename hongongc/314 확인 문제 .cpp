//
//  314.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/03.
//

#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    ch = getchar();
    
    while(ch != '\n')
    {
        if(ch >= 97 && ch <= 122) cnt++;
        ch = getchar();
    }
    
    printf("소문자의 개수 : %d\n", cnt);
    
    return 0;
}
