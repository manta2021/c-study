//
//  7576 토마토.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/06/04.
//

#include <stdio.h>
int que[3][1000001]={0,};
int main(void)
{
    int r=0, f=0, m, n, box[1001][1001]={0,}, i, j, count = 0 , max = 0;
    
    scanf("%d %d", &m, &n);
    
    if(m < 2 || n > 1000)
    {
        return 0;
    }
    
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < m; i++)
        {
            scanf("%d", &box[j][i]);
        }
    }
    
    for(j = 0; j < n; j++)
    {
        for(i = 0; i < m; i++)
        {
            if(box[j][i] == 1)
            {
                que[0][r] = j;
                que[1][r] = i;
                que[2][r++] = 0;
                count++;
                
            }
            if(box[j][i] == -1){
                count++;
            }
        }
    }
    
    if(count == n * m)
    {
        printf("0\n");
        return 0;
    }
    
    while(f < r){
        int y = que[0][f];
        int x = que[1][f];
        int l = que[2][f++];
        if(max < l){
            max = l;
        }
        
        if(y - 1 >= 0 && box[y-1][x] == 0)
            // && 순서 중요
        {
            que[0][r] = y - 1;
            que[1][r] = x;
            que[2][r++] = l + 1;
            box[y - 1][x] = 1;
            count ++;
            
        }
        
        if(x - 1 >= 0 && box[y][x-1] == 0)
        {
            que[0][r] = y;
            que[1][r] = x - 1;
            que[2][r++] = l + 1;
            box[y][x-1] = 1;
            count ++;
        }
        
        if(x + 1 < m && box[y][x+1] == 0)
        {
            que[0][r] = y;
            que[1][r] = x + 1;
            que[2][r++] = l + 1;
            box[y][x+1] = 1;
            count ++;
        }
        
        if(y + 1 < n && box[y+1][x] == 0)
        {
            que[0][r] = y + 1;
            que[1][r] = x;
            que[2][r++] = l + 1;
            box[y+1][x] = 1;
            count ++;
        }

    }
    if(count == n * m){
        printf("%d\n", max);
    }
    else{
        printf("-1\n");
    }
    
    
        return 0;
}
