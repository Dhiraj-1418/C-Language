#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	printf("Telecom Center\n\n ");
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n\n");
	
	printf("\n\nEnter your choice :");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
		
		printf("Press 1 for Top-up Recharge\n");
		printf("Press 2 for Internet Recharge\n");
		printf("Press 3 for Special Recharge\n");
		
		printf("\n\nEnter your choice");
		scanf("%d",&choice);

		switch (choice)
		{
		case 1:
		printf("Your Top-up recharge have done successfully\n");
		break;
		case 2:
		printf("Your Internet have done successfully\n");
		break;
		case 3 :
		printf("Your Special have done successfully\n");
		break;
		default : printf("Enter valid Input");
		}
		break;
		case 2 :
		
		printf("Top-up Recharge ke liye 1 dabao\n");
		printf("Internet Recharge ke liye 2 dabao\n");
		printf("Special Recharge ke liye 3 dabao\n");
		
		printf("\n\nEnter your choice");
		scanf("%d",&choice);
		
		
		switch (choice)
		{
		
		case 1 :
		printf("Your Top-up recharge have done successfully\n");
		break;
		case 2 :
		printf("Your Internet have done successfully\n");
		break;
		case 3 :
		printf("Your Special have done successfully\n");
		break;
		default : printf("Enter valid Input");
		}
		
		case 3 :
		printf("Top-up Recharge mate 1 dabao\n");
		printf("Internet Recharge mate 2 dabao\n");
		printf("Special Recharge mate 3 dabao\n");
		
		printf("\n\nEnter your choice");
		scanf("%d",&choice);
		
		
		switch (choice)
		{
		
		case 1 :
		printf("Your Top-up recharge have done successfully\n");
		break;
		case 2 :
		printf("Your Internet have done successfully\n");
		break;
		case 3 :
		printf("Your Special have done successfully\n");
		break;
		default : printf("Enter valid Input");
		}
		break;
		default : printf("Enter valid Input");
		
	}
	
	
	
	
	
}