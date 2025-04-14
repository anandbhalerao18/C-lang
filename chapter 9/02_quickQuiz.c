// --------------------------------------------------
// 📘 Topic: Structures in C (User Input and Output)
// --------------------------------------------------
// ✅ This program demonstrates how to take user input and display output using structures in C.
// ✅ Structures help in organizing multiple data items of different types under one name.
// --------------------------------------------------

#include <stdio.h>
#include <string.h> // Required for string handling functions

// --------------------------------------------------
// 🏗️ Structure Definition
// --------------------------------------------------
struct employee {
    int code;           // Employee code (integer)
    float salary;       // Employee salary (float)
    char name[10];      // Employee name (string of max 9 characters + '\0')
};

int main() {
    // 🔸 Declaring structure variables
    struct employee e1, e2, e3;

    // --------------------------------------------------
    // 📥 Taking input from the user for e1
    // --------------------------------------------------
    printf("Enter the value of code:\n");
    scanf("%d", &e1.code);

    printf("Enter the value of salary:\n");
    scanf("%f", &e1.salary);

    printf("Enter the value of name:\n");
    scanf("%s", e1.name);  // No '&' needed for character arrays

    // --------------------------------------------------
    // 📤 Displaying the values entered
    // --------------------------------------------------
    printf("Employee Details:\n");
    printf("Code   : %d\n", e1.code);
    printf("Salary : %.2f\n", e1.salary);
    printf("Name   : %s\n", e1.name);

    // 🧠 Note: e2.code is not assigned, its value is garbage (random).
    printf("e2.code (uninitialized): %d\n", e2.code); // For learning purpose

    return 0;
}
