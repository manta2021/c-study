//
//  341.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/15.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[80] = "straw";
    
    strcat(str, "berry");
    printf("%s\n", str);
    strncat(str, "piece", 3);
    printf("%s\n");
    
    return 0;
    
}
