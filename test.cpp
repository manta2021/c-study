//
//  test.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/03/26.
//

#include <stdio.h>

int test(int a){
    int res = test(1) + test(2);
    return res;
}
int main(){
    test(0);
    return 0;
}
