//calculate simple interest
#include <stdio.h>//scanf(),printf()

int main() {
    // Declare variables to store the principal amount, time, and rate values
    float principalAmount, time, rate, simpleInterest;

    // Accept the principal amount, time, and rate values from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principalAmount);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    // Calculate the simple interest
    simpleInterest = (principalAmount * time * rate) / 100;

    // Print the result
    printf("The simple interest is: %f\n", simpleInterest);

    return 0;
}