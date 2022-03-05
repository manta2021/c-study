//
//  23968 버블정렬.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/19.
//

#include <stdio.h>

void swap(int *a, int *b)
{
    *a = *b - *a;
    *b = *b - *a;
    *a = *a + *b;
}
int main(void)
{
    int i = 0, j = 0, count = 0, n = 0, m = 0, a = 0;
    int ary[10001];
    
    scanf("%d %d", &n, &m);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a);
        ary[i] = a;
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(ary[j] > ary[j + 1])
            {
                swap(&ary[j], &ary[j + 1]);
                count++;
                if(count == m)
                {
                    printf("%d %d\n", ary[j], ary[j + 1]);
                }
            }
        }
    
    }
    if(m > count)
    {
        printf("-1\n");
    }
    
    return 0;
        
}
