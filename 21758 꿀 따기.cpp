//
//  21758 꿀 따기.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/07/02.
//

#include <stdio.h>

int main(void)
{
    int a, arr[100000] = {0,}, i = 0, h = 0, j = 0, k = 0, max1 = 0, max2 = 0, max3 = 0;
    
    scanf("%d", &a);
    
    for(i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
        if(i > 0){
            arr[i] = arr[i-1]+arr[i];
        }
    }
    
    
    for(i = 1; i <= a - 2; i++)
    {
        h = h + arr[i];
    }
    
    max1 = arr[1];
    for(i < 2; i <= a - 2; i++)
    {
        if(max1 < arr[i])
        {
            max1 = arr[i];
        }
    }
    
    /*for(i = 2; i <= a - 1; i++)
    {
        j = j + arr[i];
    }
    
    for(i = 0; i <= a - 3; i++)
    {
        k = k + arr[i];
    }*/
    
    for(i = 2; i <= a - 2; i++)
    {
        if(arr[i - 1] - arr[i - 2] * 2 > 0)
        {
            max3 = arr[i];
        }
    }
    
    
    j = j * 2;
    k = k * 2;
    h = h + max1;
    max2 = h;
    
    if(max2 < j)
    {
        max2 = j;
    }
    
    if(max2 < k)
    {
        max2 = k;
    }
   
    printf("%d\n", max2);
    
    return 0;
}
