#include<stdio.h>
#include<conio.h>
void main()

{
	int x,y,z;
	printf("Enter the value of x :");
	scanf("%d", &x);
	
	printf("Enter the value of y :");
	scanf("%d", &y);
	
	printf("Enter the value of z :");
	scanf("%d", &z);
		
	printf("(%d-%d-%d)^3 =%d ",x,y,z,(x*x*x)-(3*x*x*(y+z))+((3*x)*((y*y)+(z*z)+(2*z*y))-((y*y*y)+(z*z*z)+(3*z*y)*(z+y))));
}