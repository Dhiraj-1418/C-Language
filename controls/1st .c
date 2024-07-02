#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	printf("Eneter the value :");
	scanf("%d",&x);
	
	printf("Enter the value :");
	scanf("%d",&y);

	(x<y) ?printf("%d is less than %d",x,y):printf("%d is less than %d ",y,x);

}