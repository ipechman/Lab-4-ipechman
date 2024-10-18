#include <stdio.h>

int main() {
    int rows = 3;
    int columns = 3;
    int array2D[3][3];
    int sumArray[3] = {0};

    // Prompt user to enter 9 integers
    printf("Enter 9 integers consecutive to represent 3 rows of 3 digits:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array2D[i][j]);
        }
    }

    // Display the array in 3 rows and 3 columns format
    printf("\nArray of 9 integers in 3 rows and 3 columns:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", array2D[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumArray[i] += array2D[i][j];
        }
    }

    // Display the results
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i + 1, sumArray[i]);
    }

    return 0;
}
