//
//  구간합(최적화).cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/13.
//

#include <stdio.h>

int main(void)
{
    int arr[100000] = {0,}, rangeStart = 0, rangeEnd = 0, i = 0, n = 0, r = 0;
    
    scanf("%d", &n);
    
    scanf("%d", &arr[0]);
    for(i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] += arr[i - 1];
    }
    
    scanf("%d %d", &rangeStart, &rangeEnd);
    
    r = arr[rangeEnd] - arr[rangeStart - 1];
    
    printf("%d\n", r);
    
    return 0;
}
