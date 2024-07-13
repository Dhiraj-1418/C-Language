#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c,d;
	
	printf("Enter First value 'A':");
	scanf("%d",&a);
	printf("Enter Second value 'B':");
	scanf("%d",&b);
	printf("Enter Third value 'C':");
	scanf("%d",&c);
	printf("Enter Fourth value 'D':");
	scanf("%d",&d);
	
	if (a>b)
	{
		if(a>c)
		{
			if (a>d)
			{
				printf("A is maximum");
			}
			else
			
			{
				printf("D is maximum");
			}
			
		}
		else
		{
			printf("C is Maximum");	
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is maximum");
				
			}
			else 
			{
				printf("D Is maximum");
			}

			
			
		}
		else
		{
			if(c>d)
			{
				printf("C is maximum");
				
			}
			else
			{
				printf("D is maximum");
			}
		}
	}
}