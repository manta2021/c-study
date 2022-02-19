//
//  353.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/18.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i = 0, count = 0;
    char str[80];
    
    
    printf("단어입력 : ");
    scanf("%s", str);
    printf("입력한 단어 : %s,", str);
    
    while(i != 14)
    {
        count++;
        i++;
        
        if(count >= 5 && str[i] != '\0')
        {
            str[i] = '*';
        }
    }
    

    printf("생략한 단어 : %s\n", str);
    
    return 0;
    
}
