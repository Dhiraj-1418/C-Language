#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	
	printf("Enter first value :");
	scanf("%d",&x);
	printf("Enter second value :");
	scanf("%d",&y);
	printf("Enter third value :");
	scanf("%d",&z);
	
	if(x<y)
	{
		if(x<z)
		{
		printf("%d is Minimum ",x);	
		}
		
		else
		{
			printf("%d is Minimum",z);
		}
	}
	else
	{
		if(y<z)
		{
			printf("%d is Minimum",y);
			
		}
		else
		{
			printf("%d is Minimum",z);
		}
	}
	
}