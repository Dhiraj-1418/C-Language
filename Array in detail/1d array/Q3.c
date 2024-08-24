#include <stdio.h>

void main()
 {
    int n, i;

    // Input array size
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n], b[n], c[n];

    // Input elements for array A
    printf("Enter array A's elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    // Input elements for array B
    printf("Enter array B's elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    

    // Perform addition and store in array C
    for (i = 0; i < n; i++) 
	{
        c[i] = a[i] + b[i];
    }
    printf("\n");
    // Output the result
    printf("Array C is: ");
    for (i = 0; i < n; i++) 
	{
        printf("%d ", c[i]);
    }
    printf("\n");

}

