#include <stdio.h>

void main() 
{
    int n,i,j;

    
    printf("Enter the array's row&column size: ");
    scanf("%d", &n);

    int a[n][n];

   
    printf("Enter array elements:\n");
    for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
          printf("a[%d][%d]= ", i,j);
          scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
       
	printf("Transpose of the array\n");
    
    for (i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		{
         printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
  

    
   
 

    
}

