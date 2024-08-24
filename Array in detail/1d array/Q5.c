#include <stdio.h>

void main() 
{
    int n, i, max;

    // Input array size
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    // Input array elements
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Initialize max with the first element of the array
    max = a[0];

    // Find the maximum element
    for (i = 1; i < n; i++) 
	{
        if (a[i] > max) 
		{
            max = a[i];
        }
    }

    // Output the maximum element
    printf("Maximum element in the array is: %d\n", max);

}

