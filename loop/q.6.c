#include<stdio.h>
#include<conio.h>

void main()

{
	int x;
	int y;
	
	printf("Enter 1st year:");
	scanf("%d",&x);
	printf("Enter 2nd year:");
	scanf("%d",&y);
	
	while(x<=y)
	{
		if(x%4==0)
		{
			printf("%d ",x);
		}
		x++;
	}
}