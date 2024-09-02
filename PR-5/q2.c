#include <stdio.h>

void main() 
{
    int x,y,i,j,largest;

    
    printf("Enter the size of row: ");
    scanf("%d", &x);
    
    printf("Enter the size of coloumn: ");
    scanf("%d", &y);

    int a[x][y];

   
    printf("Enter array elements:\n");
    for (i=0;i<x;i++) 
	{
		for(j=0;j<y;j++)
		{
          printf("a[%d][%d]= ", i,j);
          scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    

    
    largest = a[0][0];

    
    for (i=1;i<x;i++) 
	{
		for(j=1;j<y;j++)
	   {
		
         if (a[i][j]>largest) 
		 {
            largest = a[i][j];
         }
       }
    }

    
    printf("The largest number is: %d\n", largest);

}

