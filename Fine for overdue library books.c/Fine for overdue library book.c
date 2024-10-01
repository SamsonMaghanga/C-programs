//Calculate the fine for overdue library books
#include <stdio.h>

int main() {
    int bookID;
    int dueDay, dueMonth, dueYear;
    int returnDay, returnMonth, returnYear;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    // Input bookID
    printf("Enter book ID: ");
    scanf("%d", &bookID);

    // Input dueDate
    printf("Enter due date (day month year): ");
    scanf("%d %d %d", &dueDay, &dueMonth, &dueYear);

    // Input returnDate
    printf("Enter return date (day month year): ");
    scanf("%d %d %d", &returnDay, &returnMonth, &returnYear);

    // Calculate days overdue
    // Assuming all months have 30 days (simplification)
    int dueDateInDays = dueDay + dueMonth * 30 + dueYear * 365;
    int returnDateInDays = returnDay + returnMonth * 30 + returnYear * 365;
    daysOverdue = returnDateInDays - dueDateInDays;

    // Determine fine rate
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    // Calculate fine amount
    fineAmount = daysOverdue * fineRate;

    // Display results
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d-%d-%d\n", dueDay, dueMonth, dueYear);
    printf("Return Date: %d-%d-%d\n", returnDay, returnMonth, returnYear);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %d\n", fineRate);
    printf("Fine Amount: Ksh. %d\n", fineAmount);

    return 0;
}