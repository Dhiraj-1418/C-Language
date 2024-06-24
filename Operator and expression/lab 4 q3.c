#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	printf("Enter the value of x :");
	scanf("%d", &x);
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	printf("(%d+%d)3 = %d",x,y, (x*x*x)+(y*y*y)+(3*x*y)*(x+y));
}