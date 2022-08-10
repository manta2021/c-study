//
//  21758꿀따기 n <= 20.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/07/09.
//

#include <stdio.h>

int main(void)
{
    int N, i, j, arr[100000] = {0, }, x = 0, y = 0, z = 0, n = 0;
    int bee1 = 0, bee2 = 0, m = 0, max = 0, mn = 0, ad = 0;
    
    scanf("%d",&N);
    
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < N; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            
                bee1 = j; bee2 = i;
                n = 0;
                m = 0;
            y = 0;
            
                    for(x = 0; x < bee1; x++)
                    {
                        n = n + arr[x];
                    }
                    for(x = 0; x < bee2; x++)
                    {
                        m = m + arr[x];
                    }
                
                    y = m + n - arr[bee1];
                
                
                    if(y > max)
                    {
                        max = y;
                    }
                
                    bee1 = i;bee2 = j;
            
            ad = 0;
            
            for(int k = 0; k < n; k++)
            {
                if(arr[k] > mn)
                {
                    mn = arr[k];
                }
            
                for(int k = 1; k < n - 1; k++)
                {
                    ad = ad + arr[k];
                }
            }
                
            ad = ad + mn;
    
                    
                
                
                if(ad > max)
                {
                    max = ad;
                }
                
                
                bee2 = i; bee1 = j;
                n = 0;
                m = 0;
                z = 0;
                
                for(x = bee2 + 1; x <= n - 1; x++)
                {
                        n = n + arr[x];
                }
                for(x = bee1 + 1; x <= n - 1; x++)
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
            
    
    
    
    printf("%d\n", max);
    
    
    return 0;
}
