//
//  340.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/15.
//

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "mango tree";
    
    strncpy(str, "apple-pie", 5);
    
    printf("%s\n", str);
    
    return 0;
}
