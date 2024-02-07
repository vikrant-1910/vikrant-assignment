#include <stdio.h>

int find_max(int arr[], int size) 
{
    int max = arr[0],i;
    for( i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 3, 9, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum number in the array: %d\n", find_max(arr, size));
    return 0;
}

