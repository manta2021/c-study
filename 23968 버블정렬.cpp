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
    int i = 0, j = 0, count = 0, n = 0, m = 0;
    int ary[80];
    
    scanf("%d %d", &n, &m);
    
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            swap(&ary[j], &ary[j + 1]);
            count++;
            if(count == 10)
            {
                printf("%d, %d", ary[j], ary[j + 1]);
            }
        }
    }
    
    return 0;
        
}
