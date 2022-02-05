//
//  195.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/19.
//

#include <stdio.h>

void print_char(char ch, int count);

int main(void)
{
    print_char('@', 5);
    
    printf(" \n");
    
    return 0;

}

void print_char(char ch, int count)
{
    int i;
    
    for(i = 0; i < count; i++)
    {
        printf("%c", ch);
    
    }
    
    return;
}
