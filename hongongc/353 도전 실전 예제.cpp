#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80], str2[80], str3[80];
    
    printf("세 단어 입력 : ");
    scanf("%s %s %s", str1, str2, str3);
    
    if(strcmp(str1, str2) > 0 && strcmp(str1, str3) > 0)
    {
        char temp[80];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    
    if(strcmp(str2, str3) > 0 && strcmp(str2, str3) > 0)
    {
        char temp[80];
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    
    if(strcmp(str1, str2) > 0 && strcmp(str3, str2) > 0)
    {
        char temp[80];
        strcpy(temp, str2);
        strcpy(str2, str1);
        strcpy(str1, temp);
    }
    
    printf("%s, %s, %s", str1, str2, str3);
    
    return 0;
}
