//
//  4135 직각삼각형.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/01/15.
//

#include <stdio.h>

int main(void)
{
    int edge1,edge2,edge3;
    
    
    
    while(true){
        scanf("%d %d %d", &edge1, &edge2, &edge3);
        
        int eg1, eg2, eg3 = 0;
        
        eg1 = edge1;
        eg2 = edge2;
        eg3 = edge3;
        
        if(edge1 > edge2 && edge1 > edge3)
        {
            edge3 = edge1;
            edge1 = eg3;
            
        }
        else if(edge2 > edge1 && edge2 > edge3)
        {
            edge3 = edge2;
            edge2 = eg3;
        }
        else
        {
            edge3 = edge3;
            edge3 = eg3;
        }
        
        if(edge1 == 0 && edge2 == 0 && edge3 == 0){
            break;
        }
        
        else if(edge1 * edge1 + edge2 * edge2 == edge3 * edge3)
        {
            printf("right \n");
        }
        else
        {
            printf("wrong \n");
        }
        
    }
    
    
}
