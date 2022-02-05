//
//  224.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/28.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "cat";
    char str2[80];
    
    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);
    
    return 0;
}
