//
//  버블정렬.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/19.
//

#include <stdio.h>
void swap(int *a, int * b){
    *a = *b - *a;
    *b = *b - *a;
    *a = *a + *b;
}
int main(void)
{
    int arr[80] = {12,32,2,-1,9,23,8,4,3,10};// given array
    int n = 10;
    int i,j;
    
    for (i = 0; i < n; ++i){
        for(j = 0; j < n - 1 - i; ++j){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

    return 0;
    
}
