// -------------------------------------------------------------------
// 📘 Topic: Structure Arrays in C
// -------------------------------------------------------------------
// ✅ This program demonstrates how to use arrays of structures in C.
// ✅ Structures can be used to store complex data types, and arrays
//    of structures help manage data for multiple entities.
// -------------------------------------------------------------------

#include <stdio.h>

// --------------------------------------------------
// 🏗️ Structure Definition
// --------------------------------------------------
// This structure stores employee details:
struct employee {
    int code;          // Employee code (integer)
    float salary;      // Employee salary (float)
    char name[10];     // Employee name (char array, max 9 characters + '\0')
};

int main() {
    // --------------------------------------------------
    // 📦 Declaring an Array of Structures
    // --------------------------------------------------
    // Here we declare an array named 'facebook' to store data of 100 employees
    struct employee facebook[100];  

    // --------------------------------------------------
    // 📝 Assigning Values to Structure Array Elements
    // --------------------------------------------------
    // Let's assign values to some elements in the structure array

    facebook[0].code = 100;
    facebook[0].salary = 55000.50;
    // For strings, you can either assign during declaration or use strcpy() (not shown here for simplicity)
    snprintf(facebook[0].name, sizeof(facebook[0].name), "Anand");

    facebook[1].code = 77;
    facebook[1].salary = 43000.25;
    snprintf(facebook[1].name, sizeof(facebook[1].name), "Rahul");

    // --------------------------------------------------
    // ✨ Another Way: Initializing Structure Variable Directly
    // --------------------------------------------------
    struct employee Anand = {101, 89999.99, "Anand"};

    // --------------------------------------------------
    // 📤 Displaying Employee Data
    // --------------------------------------------------
    printf("📋 Employee Records:\n");
    printf("Employee 1 -> Code: %d | Salary: ₹%.2f | Name: %s\n", facebook[0].code, facebook[0].salary, facebook[0].name);
    printf("Employee 2 -> Code: %d | Salary: ₹%.2f | Name: %s\n", facebook[1].code, facebook[1].salary, facebook[1].name);
    printf("Anand      -> Code: %d | Salary: ₹%.2f | Name: %s\n", Anand.code, Anand.salary, Anand.name);

    return 0;
}
