//
//  선택정렬.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/05.
//

#include <stdio.h>
int findMin(int *ary, int len)
{
    int min, i, minIdx = 0;
    
    min = ary[0];
    
    for(i = 0; i < len; i++)
    {
        if(ary[i] < min)
        {
            min = ary[i];
            minIdx = i;
        }
    }
    
    return minIdx;
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int ary[80], i = 0, n = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    
    
    for(i = 0; i < n; i++)
    {
        int mi = findMin(&ary[i], n - i) + i;
        
        swap(ary[i], ary[mi]);
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
}
