//
//  353 도전 실전 예제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/18.
//

#include <stdio.h>
#include <string.h>

void swap(char *a,char *b){
    char temp[80];
    strcpy(temp,a);
    strcpy(a, b);
    strcpy(b, temp);
}
int main(void)
{
    char str1[80], str2[80], str3[80];
    char *a = str1,*b = str2,*c = str3;
    printf("세 단어 입력 : ");
    scanf("%s %s %s", str1, str2, str3);
    
    if(strcmp(a, b) > 0 && strcmp(a, c) > 0){
        swap(a, c);
    }
    if(strcmp(b, a) > 0 && strcmp(b, c) > 0){
        swap(b, c);
    }
    if(strcmp(a, b) > 0)
    {
        swap(a, b);
    }
    
    printf("%s, %s, %s\n", a,b,c);
    
    return 0;
}
