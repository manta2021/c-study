//
//  280.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/05.
//

#include <stdio.h>

int main(void)
{
    double ary[5] = {1.2, 3.5, 7.4, 0.5, 10.0};
    double *pa = ary;
    double *pb = ary + 2;
    int i;
    
    printf("%x\n", pb - pa);
    
    for(i = 0; i < 3; i++)
    {
        printf("%.1lf ", *pb);
        pb++;
    }
    
    
    return 0;
}
