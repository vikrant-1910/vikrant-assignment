#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i;
    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; 

    printf("Copied string: %s\n", destination);

    return 0;
}

