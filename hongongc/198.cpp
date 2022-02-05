//
//  198.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/19.
//

#include <stdio.h>

void fruit(void);

int main(void)
{
    fruit();
    
    return 0;

}

void fruit(void)
{
    printf("apple");
    fruit();
}
