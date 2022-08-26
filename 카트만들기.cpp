//
//  카트만들기.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/20.
//

#include <stdio.h>

int main(void)
{
    unsigned long long int N, M;
    char name[12] = {0,};
    scanf("%llu", &N);
    for(int i = 0; i < N; ++i){
        
        scanf("%s\n",name);
        scanf("%s\n",name);
        fflush(stdin);
        scanf("%llu", &M);
        printf("%s\n",name);
    }
    scanf("%llu", &M);
    for(int i = 0; i < M; ++i){
        scanf("%s\n",name);
        scanf("%s\n",name);
        scanf("%llu",&N);
    }
    scanf("%llu",&N);
    
}
