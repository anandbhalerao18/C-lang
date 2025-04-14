// ------------------------------------------------------------------
// 📘 Topic: Structures and Pointers in C
// ------------------------------------------------------------------
// ✅ This program demonstrates how to use pointers with structures.
// ✅ It shows how to access structure members using:
//    1️⃣ Dereference and dot operator: (*ptr).member
//    2️⃣ Arrow operator: ptr->member
// ------------------------------------------------------------------

#include <stdio.h>

// --------------------------------------------------
// 🏗️ Structure Definition
// --------------------------------------------------
// A structure named 'employee' with three members:
//    - code   : Integer type employee ID
//    - salary : Floating-point employee salary
//    - name   : Character array to store employee name
struct employee {
    int code;
    float salary;
    char name[10];
};

int main() {
    // --------------------------------------------------
    // 🎯 Structure Variable Declaration
    // --------------------------------------------------
    struct employee e1;         // Declare structure variable e1
    e1.code = 64;               // Assign value to 'code' of e1

    // --------------------------------------------------
    // 🔗 Pointer to Structure
    // --------------------------------------------------
    struct employee *ptr;       // Declare a pointer to structure
    ptr = &e1;                  // Store address of e1 in ptr

    // --------------------------------------------------
    // 📤 Accessing Structure Members Using Pointer
    // --------------------------------------------------

    // Method 1: Using dereference and dot operator
    // (*ptr).code means: go to the address in ptr, and access 'code'
    printf("%d \n", (*ptr).code);

    // Method 2: Using arrow operator
    // ptr->code is a shorthand for (*ptr).code
    printf("%d \n", ptr->code);

    return 0;
}
