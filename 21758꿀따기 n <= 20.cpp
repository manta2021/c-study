//
//  21758꿀따기 n <= 20.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/07/09.
//

#include <stdio.h>

int main(void)
{
    int N, i, j, k, arr[100000] = {0, }, x = 0, y = 0, z = 0, n = 0;
    int bucket = 0, bee1 = 0, bee2 = 0, m = 0, w = 0, max = 0;
    
    scanf("%d",&N);
    
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            for(k = j + 1; k < N; k++)
            {
                bucket = i; bee1 = j; bee2 = k;
                n = 0;
                m = 0;
                
                for(x = bucket; x < bee1; x++)
                {
                    n = n + arr[x];
                }
                for(x = bucket; x < bee2; x++)
                {
                    m = m + arr[x];
                }
                
                y = m + n - arr[bee1];
                if(y > max)
                {
                    max = y;
                }
                bee1 = i; bucket = j; bee2 = k;
                n = 0;
                m = 0;
                
                for(x = bee1 + 1; x <= bucket; x++)
                {
                    n = n + arr[x];
                }
                
                for(x = bucket; x < bee2; x++)
                {
                    m = m + arr[x];
                }
                
                w = n + m;
                if(w > max)
                {
                    max = w;
                }
                bee2 = i; bee1 = j; bucket = k;
                n = 0;
                m = 0;
                
                for(x = bee2 + 1; x <= bucket; x++)
                {
                    n = n + arr[x];
                }
                for(x = bee1 + 1; x <= bucket; x++)
                {
                    m = m + arr[x];
                }
                
                z = n + m - arr[bee1];
                
                if(z > max)
                {
                    max = z;
                }
            }
                
        }
            
    }
    
    
    printf("%d\n", max);
    
    
    return 0;
}
