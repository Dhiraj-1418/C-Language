#include<stdio.h>
#include<conio.h>

void main()

{
	char ans;
	int score=0;
	
	printf("Mcq Quiz\n\n");
	
	printf("Who is the prime minister of india ?\n");
	printf("A. Rahul gandhi\n");
	printf("B. Indra Gandhi\n");
	printf("C. Narendra modi\n");
	printf("D. Javahar lal nehru\n");
	printf("Enter your answer : ");
	scanf("%c",&ans);
	
	switch(ans)
	{
	
		case 'a':
		case 'A': printf("Incorrect!\n"); 
		break;
		
		case 'b':
		case 'B': printf("Incorrect!\n"); 
		break;
		
		case 'c':
		case 'C': printf("Correct!\n"); 
		score++;
		break;
		
		case 'd':
		case 'D': printf("Incorrect!\n"); 
		break;
		
		default : printf("Enter Valid Option\n");
		break;
	}
	
	printf("\n\nWho is the Cheif minister of Gujarat ?\n");
	printf("A. Rahul gandhi\n");
	printf("B. Indra Gandhi\n");
	printf("C. Narendra modi\n");
	printf("D. Bhupendra Patel\n");
	printf("Enter your answer : ");
	scanf("%c",&ans);
	
	
	switch(ans)
	{
	
		case 'a':
		case 'A': printf("Incorrect!\n"); 
		break;
		
		case 'b':
		case 'B': printf("Incorrect!\n"); 
		break;
		
		case 'c':
		case 'C': printf("Incorrect!\n"); 
		break;
		
		case 'd':
		case 'D': printf("Correct!\n"); 
		score++;
		break;
		
		default : printf("Enter Valid Option\n");
		break;
		
	}
	
	printf("\n\nWho is the Cheif minister of U.P ?\n");
	printf("A. Rahul gandhi\n");
	printf("B. Yogi Aditya Nath\n");
	printf("C. Narendra modi\n");
	printf("D. Javahar lal nehru\n");
	printf("Enter your answer : ");
	scanf("%c",&ans);
	
	switch(ans)
	{
	
		case 'a':
		case 'A': printf("Incorrect!\n"); 
		break;
		
		case 'b':
		case 'B': printf("Correct!\n"); 
		score++;
		break;
		
		case 'c':
		case 'C': printf("Incorrect!\n"); 
		break;
		
		case 'd':
		case 'D': printf("Incorrect!\n"); 
		break;
		
		default : printf("Enter Valid Option\n");
		break;
	}
	
	printf("\n\nWho is the Cheif minister of Bihar ?\n");
	printf("A. Rahul gandhi\n");
	printf("B. Indra Gandhi\n");
	printf("C. Nitish kumar\n");
	printf("D. Javahar lal nehru\n");
	printf("Enter your answer : ");
	scanf("%c",&ans);
	
	switch(ans)
	{
	
		case 'a':
		case 'A': printf("Incorrect!\n"); 
		break;
		
		case 'b':
		case 'B': printf("Incorrect!\n"); 
		break;
		
		case 'c':
		case 'C': printf("Correct!\n"); 
		score++;
		break;
		
		case 'd':
		case 'D': printf("Incorrect!\n"); 
		break;
		
		default : printf("Enter Valid Option\n");
		break;
	}
	
	printf("Final score is :%d out of 4",score);
	
	
}