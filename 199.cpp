//
//  199.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/19.
//

#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1);
    
    return 0;

}

void fruit(int count)
{
    printf("apple\n");
    if(count == 3)return;
    fruit(count + 1);
}
