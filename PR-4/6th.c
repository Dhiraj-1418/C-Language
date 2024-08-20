#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	for(a=1; a<=5; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b);	
		}
		for(b=a; b<=4; b++)
		{
			printf("    ");
		}
		
		for(c=a; c>=1; c--)
		{
			printf("%d ",c);
		}
		printf("\n");	
	}
	
}