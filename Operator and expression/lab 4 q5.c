#include<stdio.h>
#include<conio.h>

void main()

{
	int x,y,z;
	
	printf("Enter the value of x :");
	scanf("%d", &x);
	printf("enter teh value of y :");
	scanf("%d", &y);
	printf("Enter the value of z :");
	scanf("%d", &z);
	
	printf("(%d+%d+%d)3 =%d ", x,y,z,(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x)));
}