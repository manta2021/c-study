//
//  부분합.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/13.
//

#include <stdio.h>

int main(void)
{
    int arr[100000] = {0, }, sum[100000] = {0, }, n = 0, i = 0, rangeStart = 0, rangeEnd = 0, r = 0;
    //Range_start : 혜준이가 쓴 변수명
    
    scanf("%d", &n);
    //개수
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        //배열에 들어갈 수
    }
    
    sum[0] = arr[0];
    
    for(i = 1; i < n; i++)
    {
        sum[i] = arr[i] + sum [i - 1];
    }
    
    scanf("%d %d", &rangeStart, &rangeEnd);
    rangeStart = rangeStart - 1;
    r = sum[rangeEnd] - sum[rangeStart];
    
    printf("%d\n", r);
    
    return 0;
}
