//
//  219확인문제 3.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/22.
//

#include <stdio.h>
int main(void) // 함수선언
{
    int A[3] = {1, 2, 3}; // 배열 선언 및 초기화
    int B[10]; // 배열 선언
    int i; // 변수 선언
    
    for(i = 0; i < 10; i++) // 반복
    {
//        if(i % 3 == 0)
//        {
//            B[i] = A[0];
//        }
//        else if(i % 3 == 1)
//        {
//            B[i] = A[1];
//        }
//        else
//        {
//            B[i] = A[2];
//        }
        B[i] = A[i % 3]; // A의 값을 B배열에 대입
    }
    
    for(i = 0; i < 10; i++) // 반복
    {
        printf("%d\t", B[i]); // B의 배열을 출력
    }
}
