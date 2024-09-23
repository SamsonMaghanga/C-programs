#include <stdio.h>

int main() {
    // Declare variables to store the radius, height, volume, and surface area
    float radius, height, volume, surfaceArea;

    // Accept the radius and height from the user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume of the cylinder
    volume = (22.0/7.0) * radius * radius * height;

    // Calculate the surface area of the cylinder
    surfaceArea = 2 * (22.0/7.0) * radius * radius + 2 * (22.0/7.0) * radius * height;

    // Print the results
    printf("The volume of the cylinder is: %.2f\n", volume);
    printf("The surface area of the cylinder is: %.2f\n", surfaceArea);

    return 0;
}