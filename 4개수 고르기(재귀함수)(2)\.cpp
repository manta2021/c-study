//
//  4개수 고르기(재귀함수)(2)\.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/04/30.
//

#include <stdio.h>

int pick(int n, int level, int arr[4], int number)
{
    int j;
    arr[level] = number;
    if(level ==  3)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d", arr[j]);
        }
        printf("\n");
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        pick(n, level+1, arr, i);
    }
    return 0;
}

int main(void)
{
    int i, n, arr[4] = {0, };
    
    scanf("%d", &n);
    
    pick(n, 0, arr, 0);
    pick(n, 0, arr, 1);
    pick(n, 0, arr, 2);
    return 0;
}
