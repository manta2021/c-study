//
//  191 확인문제 - 3.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/15.
//

#include <stdio.h>

double centi_to_meter(double a); // 함수선언

int main(void)
{
    double a; // 변수a 선언
    scanf("%lf", &a); //a의 값을 입력받음
    
    double res; // 변수res 선언
    
    res = centi_to_meter(a); // res의 값을 대입 및 함수호줄
    printf("%.2lfm\n", res); // res값 출력
    
    return 0;
}

double centi_to_meter(double a) // 함수정의
{
    double temp; // 변수 선언
    
     temp = a / 100; // 변수 값 초기화
    
    return temp; // 반환
}
