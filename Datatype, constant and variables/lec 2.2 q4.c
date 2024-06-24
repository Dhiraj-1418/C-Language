#include<stdio.h>
#include<conio.h>

void main()

{
	int principal=25000;
	int rate=2;	
	int time =1;
	
	printf("Formula of simple Interest = Principal x rate x time /100\n");
	printf("S.I = P x R x T/100 = %d x %d x %d /100 = %d", principal, rate, time, principal*rate*time/100);
}