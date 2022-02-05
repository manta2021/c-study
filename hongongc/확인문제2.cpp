#include<stdio.h>
int main(void)
{
	double height, weight;
	
    scanf("%lf %lf", &height, &weight);
    
    if (height >= 187.5 && weight < 80)
	{
		printf("Ok\n");
	}
	else
	{
		printf("Cancle\n");
	}
	return 0;
}
