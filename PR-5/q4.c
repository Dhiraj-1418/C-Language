#include <stdio.h>
#include<conio.h>

int main() {
    int x,y,i,j,rsum = 0,csum = 0;
    int IndexOfR, IndexOfC;

    
    printf("Enter number of rows: ");
    scanf("%d", &x);
    printf("Enter number of columns: ");
    scanf("%d", &y);

    int a[x][y];

   
    printf("Enter elements of the array:\n");
    for (i=0;i<x;i++) 
	{
        for (j=0;j<y;j++) 
		{
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
         printf("\n");
    }
    
     for (i=0;i<x;i++) 
	{
        for (j=0;j<y;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    printf("Enter the row index to find the sum: ");
    scanf("%d", &IndexOfR);
    printf("Enter the column index to find the sum: ");
    scanf("%d", &IndexOfC);

    
    
    
    for (j=0; j<y; j++) 
	{
        rsum +=a[IndexOfR][j];
    }
    for (i=0;i<x;i++) 
	{
        csum +=a[i][IndexOfC];
    }

   

    
    printf("Sum of elements in row %d: %d\n", IndexOfR, rsum);
    printf("Sum of elements in column %d: %d\n", IndexOfC, csum);

    return 0;
}

