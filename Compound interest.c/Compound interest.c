//Find Compound interest
#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store the principal amount, rate, number of compounding years, total number of years, and final amount including interest
    float principalAmount, rate, n, t, finalAmount;

    // Accept the principal amount, rate, number of compounding years, and total number of years from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principalAmount);

    printf("Enter the interest rate (as a decimal): ");
    scanf("%f", &rate);

    printf("Enter the number of compounding years: ");
    scanf("%f", &n);

    printf("Enter the total number of years: ");
    scanf("%f", &t);

    // Calculate the final amount including interest
    finalAmount = principalAmount * pow((1 + rate/n), n*t);

    // Print the result
    printf("The final amount including interest is: %f\n", finalAmount);

    return 0;
}