//
//  311.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/03.
//

#include <stdio.h>

int main(void)
{
    int num, grade;
    
    printf("학번 입력 : ");
    scanf("%d", &num);
    getchar();
    printf("학점 입력 : ");
    grade = getchar();
    printf("학번 : %d, 학점 : %c\n", num, grade);
    
    return 0;
}
