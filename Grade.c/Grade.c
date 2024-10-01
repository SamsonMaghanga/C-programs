// Grading System
#include <stdio.h>

int main() {
    int math, science, english;
    float average;
    char grade;

    // Prompt the user to enter marks for 3 subjects
    printf("Enter marks for Math: ");
    scanf("%d", &math);
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    printf("Enter marks for English: ");
    scanf("%d", &english);

    // Calculate the average score
    average = (math + science + english) / 3.0;

    // Use if..else condition to decide the grade based on the average score
    if (average >= 70 && average <= 100) {
        grade = 'A';
    } else if (average >= 60 && average < 70) {
        grade = 'B';
    } else if (average >= 50 && average < 60) {
        grade = 'C';
    } else if (average >= 40 && average < 50) {
        grade = 'D';
    } else {
        grade = 'E'; // Fail
    }

    // Print the result
    printf("Average score: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}