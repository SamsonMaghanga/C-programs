//C program that defines the structure EMPLOYEE
#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 25
#define DEPARTMENT_LENGTH 20
#define EMAIL_LENGTH 50

// Define the structure employee
struct employee {
    char name[NAME_LENGTH];
    int id;
    char department[DEPARTMENT_LENGTH];
    float salary;
    char email[EMAIL_LENGTH];
};

int main() {
    // Declare and initialize a variable of type employee
    struct employee emp = {
        "John Doe",          // name
        12345,              // id
        "Human Resources",   // department
        55000.50,           // salary
        "john.doe@company.com" // email
    };

    // Print the values of the fields
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
