#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_STUDENTS 5

int main() {
    char studentNames[NUM_STUDENTS][MAX_NAME_LENGTH],i;

    // Accepting names from the user
    printf("Enter names of 5 students:\n");
    for ( i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }

    // Displaying the entered names
    printf("\nNames of the students:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Student %d: %s\n", i + 1, studentNames[i]);
    }

    return 0;
}

