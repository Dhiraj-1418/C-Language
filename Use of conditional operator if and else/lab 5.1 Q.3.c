#include<stdio.h>
#include<conio.h>

void main()
{
	float x,y,z,avg;
	
	printf("Enter your  Science marks :");
	scanf("%f",&x);	
	
	printf("Enter your  Math marks :");
	scanf("%f",&y);	
	
	printf("Enter your  English marks :");
	scanf("%f",&z);
	
	if(x<=100 && y<=100 && z<=100)
	{
		avg=(x+y+z)/3;
		printf("Average marks=%.2f",avg);
	}
	else 
	{
		printf("Enter Valid Marks");
	}
}