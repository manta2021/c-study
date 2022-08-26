//
//  모기퇴치.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/08/20.
//

#include <stdio.h>

int main(void)
{
    int boomHill[52][52] = {0,}, M = 0, N = 0, yi = 0, xi = 0, scanY = 0, scanX = 0,up = 0, down = 0,  right = 0, left = 0, crossSum = 0, diaSum = 0, ur = 0, ul = 0, dr = 0, dl = 0, max = 0;
    
    scanf("%d %d", &N, &M);
    
    for(scanY = 0; scanY < N; scanY++)
    {
        for(scanX = 0; scanX < N; scanX++)
        {
            scanf("%d", &boomHill[scanY][scanX]);
        }
    }
    
    
    for(yi = 0; yi < N; yi++)
    {
        for(xi = 0; xi < N; xi++)
        {
            crossSum = 0; up = 0; down = 0;  right = 0; left = 0;
            
            for(int mi = 1; mi <= M && yi - mi >= 0; mi++)
            {
                up += boomHill[yi - mi][xi];
            }
            for(int mi = 1; mi <= M && yi + mi < N; mi++)
            {
                down += boomHill[yi + mi][xi];
            }
            for(int mi = 1; mi <= M && xi + mi < N; mi++)
            {
                right += boomHill[yi][xi + mi];
            }
            for(int mi = 1; mi <= M && xi - mi >= 0; mi++)
            {
                left += boomHill[yi][xi - mi];
            }
            
            crossSum = boomHill[yi][xi] + up + down + right + left;
            
            if(max < crossSum)
            {
                max = crossSum;
            }
            
            diaSum = 0; ur = 0; ul = 0; dr = 0; dl = 0;
            
            for(int mi = 1; mi <= M && yi - mi >= 0 && xi - mi >= 0; mi++)
            {
                ul += boomHill[yi - mi][xi - mi];
            }
            for(int mi = 1; mi <= M && yi - mi >= 0 && xi + mi < N; mi++)
            {
                ur += boomHill[yi - mi][xi + mi];
            }
            for(int mi = 1; mi <= M && yi + mi < N && xi - mi >= 0; mi++)
            {
                dl += boomHill[yi + mi][xi - mi];
            }
            for(int mi = 1; mi <= M && yi + mi < N && xi + mi < N; mi++)
            {
                dr += boomHill[yi + mi][xi + mi];
            }
            
            diaSum = boomHill[yi][xi] + ul + ur + dl + dr;
            
            if(max < diaSum)
            {
                max = diaSum;
            }
        }
    }
    
    printf("%d\n", max);
    
    return 0;
    
}
