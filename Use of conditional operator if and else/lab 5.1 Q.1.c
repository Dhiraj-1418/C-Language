#include<stdio.h>
#include<conio.h>

void main()


{
	int x,y;
	printf("Enter the value of First number :");
	scanf("%d",&x);
	
	printf("Enter the value of Second number :");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("%d is minimum",y);
	}
	else
	{
		printf("%d is minimum", x);
	}
	
}