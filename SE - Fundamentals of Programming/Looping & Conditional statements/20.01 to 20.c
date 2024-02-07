#include <stdio.h>

int main() {
    int rows = 2;
    int cols = 10;
    int num = 1;
    int i,j;

    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%02d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

