//
//  232 도전 실전 예제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/29.
//

#include <stdio.h>


int main(void)
{
    char str[80];
    int i;
    int count = 0;
    
    printf("문장 입력 : ");
    gets(str);
   
    
    for(i = 0; i < 80; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 'a' - 'A';
            count++;
        }
    }
    printf("바뀐 문장 : %s\n", str);
    printf("바뀐 문자 수 : %d\n", count);
    
    return 0;
}
