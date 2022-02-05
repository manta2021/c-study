#include<stdio.h>
int main(void)
{
    
	int chest;
	char size;
	
    scanf("%d", &chest);
    
    if(chest <= 90)
	{
		size = 'S';
	}
	else if(chest > 90 && chest < 100)
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("size : %c\n", size);
	return 0;
}
