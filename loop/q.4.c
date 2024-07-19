#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	int n;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d \n",i);
		}
		i++;	
	}
}