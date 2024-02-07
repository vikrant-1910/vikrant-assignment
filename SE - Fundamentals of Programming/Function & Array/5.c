#include <stdio.h>

void sort_array(int arr[], int size, char order) {
    int temp,i,j;
    for( i = 0; i < size - 1; i++) {
        for( j = 0; j < size - i - 1; j++) {
            if(order == 'a') {
                if(arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if(order == 'd') {
                if(arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else {
                printf("Invalid order specified!\n");
                return;
            }
        }
    }
}

int main() {
    int size,i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter elements of first array: ");
    for( i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array: ");
    for( i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    char order;
    printf("Enter order of sorting (a - ascending, d - descending): ");
    scanf(" %c", &order);
    sort_array(arr1, size, order);
    sort_array(arr2, size, order);
    printf("Sorted first array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSorted second array: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

