//
//  4개수 고르기(제귀함수).cpp
//  c++ study
//
//  Created by 김혜준 on 2022/04/30.
//

#include <stdio.h>

int pick(int n, int arr[5], int stac)
{
    int i = 0;
    stac++;
    arr[4]++;
    if(arr[4] >= n)
    {
        arr[3] = arr[3] + 1;
        arr[4] = 0;
    }
    if(stac == 4)
    {
        for(i = 0; i < 4; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
        stac = 0;
    }
    if(arr[0] == n && arr[1] == n && arr[2] == n && arr[3] == n)
    {
        return 0;
    }
    
    return pick(n, arr, stac);
}


int main(void)
{
    int n, arr[5] = {0, }, stac = 0;
    
    scanf("%d", &n);
    
    
    pick(n, arr, stac);
    
    
    
    return 0;
}
