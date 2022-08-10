//
//  피하자.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/04.
//

#include <stdio.h>

int main(void)
{
    int a = 0, arr[1000001] = {0,}, i = 0;
    
    
    scanf("%d", &a);
    
    for(i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if(arr[0] % 2 != 0 && arr[1] % 2 == 0 && arr[2] % 2 != 0)
    {
        printf("1\n");
    }
    
    else if(arr[0] % 2 == 0 && arr[1] % 2 != 0 && arr[2] % 2 == 0)
    {
        printf("1\n");
    }
    
    else
    {
        printf("0\n");
    }
    
    return 0;
}
