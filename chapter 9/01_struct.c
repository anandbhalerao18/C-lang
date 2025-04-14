// --------------------------------------------------
// 📘 Topic: Structures in C
// --------------------------------------------------
// ✅ This program demonstrates how to define and use structures in C.
// ✅ Structures allow grouping of variables of different types under one name.
// ✅ Structures are very useful for organizing complex data.
// --------------------------------------------------

#include <stdio.h>
#include <string.h> // Required to use strcpy() for string assignment

// --------------------------------------------------
// 🏗️ Structure Definition
// --------------------------------------------------
// Structure to store employee information
struct Employee {
    int id;             // Employee ID
    float salary;       // Employee Salary
    char name[50];      // Employee Name
};

int main() {
    // --------------------------------------------------
    // 🧾 Structure Variable Declaration
    // --------------------------------------------------
    struct Employee e1;  // Creating a variable 'e1' of type 'struct Employee'

    // --------------------------------------------------
    // 📝 Assigning Values to Structure Members
    // --------------------------------------------------

    e1.id = 101;                    // Assigning integer value
    e1.salary = 45000.75;           // Assigning float value
    strcpy(e1.name, "Anand");       // Assigning string using strcpy()

    // --------------------------------------------------
    // 📤 Displaying Structure Data
    // --------------------------------------------------
    printf("📋 Employee Details:\n");
    printf("ID     : %d\n", e1.id);
    printf("Name   : %s\n", e1.name);
    printf("Salary : ₹%.2f\n", e1.salary);

    // --------------------------------------------------
    // 🧠 Key Points (Notes):
    // --------------------------------------------------
    // ✅ Structures group variables of different types.
    // ✅ Members are accessed using the dot operator (.)
    // ✅ Use strcpy() to assign strings to char arrays.
    // ✅ Structures help organize data logically and clearly.
    // ✅ You can also create arrays of structures or pass them to functions.

    return 0;
}
