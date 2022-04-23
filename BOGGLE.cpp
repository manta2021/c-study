//
//  BOGGLE.cpp
//  c++ study
//
//  Created by 김혜준 on 2022/04/23.
//

#include <stdio.h>
#include <string.h>

bool search(int x, int y, char arr[5][5], char word[15], int level)
{
    if(word[level] == '\0')
    {
        return true;
    }
    int deltax[8] = {-1, 0, 1, -1 ,1, -1, 0, 1};
    int deltay[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    for(int n = 0; n < 8; n++)
    {
        if(arr[y + deltay[n]][x + deltax[n]] == word[level] || arr[y + deltay[n]][x + deltax[n]] == word[level] - ('a' - 'A') || arr[y + deltay[n]][x + deltax[n]] == word[level] + ('a' - 'A'))
        {
            level++;
            return search(x + deltax[n], y + deltay[n], arr, word, level);
        }
    }
    return false;
}


int main(void)
{
    char arr[5][5], word[15];
    int i, j, count = 0;
   
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%c ", &arr[i][j]);
        }
    }
    
    scanf("%s", word);
    
    bool check = false;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(arr[i][j] == word[count] || arr[i][j] == word[count] - ('a' - 'A') || arr[i][j] == word[count] + ('a' - 'A'))
            {
                count++;
                check = search(j, i, arr, word, count);
            }
        }
    }
    printf("%d\n",check);
    return 0;
}
