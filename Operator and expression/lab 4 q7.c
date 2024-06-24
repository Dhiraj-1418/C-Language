#include<stdio.h>
#include<conio.h>

void main()

{
	int  x,y,z;
	printf("Enter the value of x :");
	scanf("%d",&x);
	
	printf("Enter the value of y :");
	scanf("%d", &y);
	
	printf("Enter the value of z :");
	scanf("%d", &z);
	
	printf("(%d+%d+%d)^2 = %d",x,y,z,(x*x)+(y*y)+(z*z)+(2*x*y)+(2*x*z)+(2*y*z));
}