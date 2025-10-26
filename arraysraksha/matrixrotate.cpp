#include <stdio.h>                   // Include standard input/output library

#define SIZE 5                        // Define constant for matrix size

int main() {
    int matrix[SIZE][SIZE];           // Declare a 2D array for the original matrix
    int rotated[SIZE][SIZE];          // Declare a 2D array for the rotated matrix
    int i, j;                         // Declare loop variables

    // Input elements of the matrix
    printf("Enter 25 elements for the 5x5 matrix:\n");    // Prompt user for input
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf_s("%d", &matrix[i][j]); // Read each element using scanf_s
        }
    }

    // Rotate the matrix by 90 degrees clockwise
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            rotated[j][SIZE - 1 - i] = matrix[i][j];    // Place each element at its new position
        }
    }

    // Display the rotated matrix
    printf("Rotated Matrix:\n");                      // Print header for output
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", rotated[i][j]);              // Print each element
        }
        printf("\n");                                  // Newline after each row
    }

    return 0;                                          // End of program
}
