#include<stdio.h>
#include<conio.h>

void main()
{
	const float pi=3.14;
	float radius=12;
	printf("Area of circle=pi x square of radius\n");
	printf("Area of Circle = %.2f x (%.0f)2 = %.3f",pi,radius, pi*radius*radius);
}