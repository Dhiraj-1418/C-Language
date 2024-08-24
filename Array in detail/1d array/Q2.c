#include <stdio.h>

void main() 
{
    int n, i;
    float sum = 0.0, average;

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

    // Calculate sum of array elements
    for (i = 0; i < n; i++) 
	{
        sum += a[i];
    }

    // Calculate average
    average = sum / n;

    // Output the average
    printf("Average of the array: %.2f\n", average);

}

