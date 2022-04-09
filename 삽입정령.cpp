//
//  삽입정령.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/05.
//

#include <stdio.h>

void swap(int &a, int &b)
{
    a = a - b;
    b = a + b;
    a = b - a;
}

int main(void)
{
    int i, min, ex, n, ary[80], j;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    
    for(i = 1; i < n; i++)
    {
        ex = ary[i];
        
        for(j = i - 1; j >= 0; j--)
        {
            if(ex <= ary[j])
            {
                swap(ary[j], ary[j + 1]);
            }
            else if(ex > ary[j])
            {
                ary[j + 1] = ex;
                break;
            }
        }
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }

}
