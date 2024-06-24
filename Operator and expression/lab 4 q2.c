#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter the value of x :");
	scanf("%d",&x);
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	printf("(%d-%d)2 = %d", x,y,(x*x)+(y*y)-(2*x*y));
	
	
}