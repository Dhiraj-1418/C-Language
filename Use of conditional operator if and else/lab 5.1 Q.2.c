#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	
	printf("Enter any number:");
	scanf("%d",&x);
	
	if(x==0)
	{
		printf("The Number is neutral");
	}
	else if(x>0)
	
	{
		printf("The number is Positive");
	}
	else if(x<0)
	{
		printf("The value is negative");
	}
}