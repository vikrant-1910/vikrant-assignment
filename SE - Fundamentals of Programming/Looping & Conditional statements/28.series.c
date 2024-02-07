#include <stdio.h>

int main() 
{
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int num = 1;
    printf("%d ", num);

    for (i = 1; i < n; i++) {
        if (i % 2 == 1) {
            num *= 2;
        } else {
            num *= 3;
        }
        printf("%d ", num);
    }

    return 0;
}

