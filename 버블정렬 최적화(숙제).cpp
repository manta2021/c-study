//
//  버블정렬 최적화(숙제).cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int ary[80] = {0,}, i, j, n, count = 0, cou = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
    }
    for(i = 0; i < n; i++)
    {
        cou = 0;
        for(j = 1; j < n - i; j++)
        {
            if(ary[j] < ary[j - 1])
            {
                swap(&ary[j], &ary[j - 1]);
                cou++;
            }
            count++;
        }
        if(cou <= 1) break;
    }
    printf("%d\n", count);
    for(i = 0; i < n; i++)
    {
        printf("%d ", ary[i]);
    }
    
    return 0;
}
