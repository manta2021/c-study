//
//  190 확인문제 - 1.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/15.
//

#include <stdio.h>
double average(double a, double b);

int main(void)
{
    double res;
    res = average(1.5, 3.4);
    printf("%.1lf\n", res);
}

double average(double a, double b)
{
    double temp = 0;
    temp = a + b;
    return(temp / 2.0);
}
