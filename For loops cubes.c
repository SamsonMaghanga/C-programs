// For loop to display the cubes of numbers
#include <stdio.h>

int main() {
    int n;
    printf("Input number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Number is: %d and cube of the %d is :%d\n", i, i, i * i * i);
    }

    return 0;
}