#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,first=0,second=1,ans;
	
	printf("Enter n:");
	scanf("%d",&n);
	printf("0 1 ");
	for(i=1; i<=n; i++)
	{
		ans = first + second;
		first=second;
		second=ans;
		printf("%d ",ans);
	}
	
	
}