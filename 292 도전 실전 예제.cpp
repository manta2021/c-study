//
//  292 도전 실전 예제.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/02/02.
//

#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
    int lotto_nums[6];
    
    input_nums(lotto_nums);
    print_nums(lotto_nums);
    
    return 0;
}

void input_nums(int *lotto_nums)
{
    int i;
    
    for(i = 0; i < 6; i++)
    {
        printf("번호 입력 : ");
        scanf("%d", &lotto_nums[i]);
        if(lotto_nums[i] == lotto_nums[i - 1] || lotto_nums[i] == lotto_nums[i - 2] || lotto_nums[i] == lotto_nums[i - 3] || lotto_nums[i] == lotto_nums[i - 4] || lotto_nums[i] == lotto_nums[i - 5] || lotto_nums[i] == lotto_nums[i - 6])
        {
            printf("같은번호가 있습니다!\n");
            i--;
        }
        if(lotto_nums[i] > 45)
        {
            i--;
        }
    }
}

void print_nums(int *lotto_nums)
{
    int i;
    
    for(i = 0; i < 6; i++)
    {
        printf("%d ", lotto_nums[i]);
    }
}
