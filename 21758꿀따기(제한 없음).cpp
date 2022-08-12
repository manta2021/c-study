//
//  21758꿀따기(제한 없음).cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/06.
//

#include <stdio.h>

int main(void)
{
    int N = 0,
    arr[100000] = {0, },
    i = 0,
    s1 = 0,
    s2 = 0,
    s3 = 0,
    max = 0;
    
    scanf("%d", &N);
        for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //벌통이 벌들 사이에 있을 때
    //제일 큰 수 + 두 벌사이의 합
    for(int bee = 1;  bee < N - 1; bee++)
    {
        s1 += arr[bee];
    }
    
    for(i = 1; i < N - 1; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    s1 += max;
    
    //왼쪽에서 오른쪽 방향
    s2 = 0;
    for(int bee1 = 1; bee1 < N; bee1++)
    {
        s2 += arr[bee1];
    }
    
    int max1 = -999999;
    for(int bee2 = 1; bee2 < N; bee2++)
    {
        
        int bee2Sum = 0;
        for(i = bee2 + 1;  i < N + 1; i++)
        {
            bee2Sum += arr[i];
            
        }
        bee2Sum -= arr[bee2];
        if(max1 < bee2Sum)
        {
            max1 = bee2Sum;
        }
        
    }
    
    s2 += max1;
    
    
    
    //오른쪽에서 왼쪽
    int bucket = 0;
    for(bucket = 0; bucket < N - 1; bucket++)
    {
        s3 += arr[bucket];
    }
    
    int max2 = -999999;
    for(int bee3 = 1; bee3 < N - 1; bee3++)
    {
        int bee3Sum=0;
       
        for(bucket = 0; bucket < bee3; bucket++)
        {
            bee3Sum += arr[bucket];

        }
        bee3Sum -= arr[bee3];
        if(max2 < bee3Sum)
        {
            max2 = bee3Sum;
        }
    }
    
    s3 += max2;
    
    if(s1 >= s2 && s1 >= s3)
    {
        printf("%d\n", s1);
        return 0;
    }
    
    if(s2 >= s1 && s2 >= s3)
    {
        printf("%d\n", s2);
        return 0;
    }
    
    if(s3 >= s1 && s3 >=  s2)
    {
        printf("%d\n", s3);
        return 0;
    }
    
    return 0;
}
