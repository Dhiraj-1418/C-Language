#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	for(a=5; a>=1; a--)
	{
		for(c=2; c<=a; c++)
		{
			printf("  ");
		}
		for(b=a; b<=5; b++)
		{
			printf("%d ",b);
			
		}
		for(d=4; d>=a; d--)
			{
				printf("%d ",d);
			}
		printf("\n");
	}
	
}