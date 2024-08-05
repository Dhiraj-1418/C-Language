#include<stdio.h>
#include<conio.h>

void main()


{
	int i=1,n;

	printf("Enter n:");
	scanf("%d",&n);

	do
	{
		if(i%2==1)
		{
			printf("%d ",i);
			
		}
		i++;
		
		
	}while(i<=n);

}