#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter your number:");
	scanf("%d",&n);
	
	int ld= n%10;
	
	while(n>9)
	{
		n=n/10;	
	}
	printf("First digit:%d\n",n);
	printf("Last digit:%d\n\n",ld);
	
	printf("Sum of first and last digit:%d",ld+n);
	
	
}