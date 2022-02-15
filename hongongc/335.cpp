//
//  335.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/12.
//

#include <stdio.h>

int main(void)
{
    char ani[20];
    char why[80];
    printf("좋아하는 동물 : ");
    scanf("%s", ani);
//    scanf("%s\n", ani);
//    getchar();
    printf("좋아하는 이유 : ");
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);
    return 0;
}
