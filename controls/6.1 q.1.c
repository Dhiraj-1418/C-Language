#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c;
	
	printf("Enter value of a :");
	scanf("%d",&a);
	printf("Enter value of b :");
	scanf("%d",&b);
	printf("Enter value of c :");
	scanf("%d",&c);
	
	(a>b)? (a>c)? printf("%d is maximum",a):printf("%d is maximum",c)  : (b>c)? printf("%d is maximum",b): printf("%d is maximum",c);
}