//
//  315.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/11.
//

#include <stdio.h>

int main(void)
{
    char ch;
    int len = 0;
    int maxlen = 0;
    while(ch != '0')
    {
        ch = '\0';
        while(ch != '\n' && ch !='0')
        {
            ch = getchar();
            len++;
            
        }
        len = len - 1;
        if(len > maxlen)
        {
            maxlen = len;
        }
        len = 0;
    }
    printf("가장 긴 단어의 길이 : %d\n", maxlen);
    
          
    
    
    return 0;
    
}
