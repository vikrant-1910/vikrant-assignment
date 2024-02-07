#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    int sum = 0;
	int i;
    printf("Enter %d numbers:\n", SIZE);
    for ( i = 0; i < SIZE; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < SIZE; i++) 
	{
        sum += arr[i];
    }
    printf("\nSum of array elements: %d\n", sum);

    return 0;
}

