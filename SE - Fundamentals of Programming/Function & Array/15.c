#include <stdio.h>

#define SIZE 5

int main() {
    int arr[SIZE];
    int i,j;
	printf("Enter %d numbers:\n", SIZE);
    for ( i = 0; i < SIZE; i++) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE - 1; i++) 
	{
        for ( j = 0; j < SIZE - i - 1; j++)
		{
            if (arr[j] > arr[j + 1]) 
			{
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

