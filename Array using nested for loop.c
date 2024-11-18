//Array using a nested for loop
#include <stdio.h>

int main() {
    // Define and initialize a 2D array named scores
    int scores[2][3] = {
        {65, 92, 0},  // First row with values 65 and 92, and an extra column initialized to 0
        {35, 65, 701} // Second row with values 35, 65, and 701
    };

    // Print the elements of the array using a nested for loop
    printf("Scores Array:\n");
    for (int i = 0; i < 2; i++) { // Loop through rows
        for (int j = 0; j < 3; j++) { // Loop through columns
            printf("%d ", scores[i][j]); // Print each element
        }
        printf("\n"); // New line after each row
    }

    return 0;
}