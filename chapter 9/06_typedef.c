// ------------------------------------------------------------------
// 📘 Topic: typedef with Structures in C
// ------------------------------------------------------------------
// ✅ This program demonstrates the use of `typedef` to create
//    an alias (short name) for a `struct` in C programming.
// ✅ We also show how to use a pointer to this typedef’d structure.
// ------------------------------------------------------------------

#include <stdio.h>
#include <string.h>  // Required for using strcpy()

// --------------------------------------------------
// 🏗️ Structure Declaration using typedef
// --------------------------------------------------
// Here we define a structure named 'employee' and create
// an alias 'Emp' using typedef so that we can use 'Emp'
// instead of writing 'struct employee' every time.

typedef struct employee {
    int code;        // Employee code (integer)
    float salary;    // Employee salary (float)
    char name[10];   // Employee name (char array)
} Emp;               // 'Emp' is now a new type name for struct employee

int main() {
    // --------------------------------------------------
    // ✨ Using typedef for other types (example only)
    // --------------------------------------------------
    // typedef int anand;
    // anand a = 99;
    // printf("The value of A is %d \n", a);
    // (The above lines are commented but show you can alias any type)

    // --------------------------------------------------
    // 📦 Declaring and Initializing a Structure Variable
    // --------------------------------------------------
    Emp e1;               // Instead of writing `struct employee`, we use `Emp`
    Emp* ptr1 = &e1;      // Declare a pointer to Emp and assign it the address of e1

    // Assigning values to the structure members
    e1.code = 53345;                      // Set employee code
    strcpy(e1.name, "anand");            // Set employee name using strcpy (since name is a char array)
    e1.salary = 335.32;                  // Set employee salary

    // --------------------------------------------------
    // 🖨️ Printing Structure Data
    // --------------------------------------------------

    // Accessing directly via variable
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    // Accessing using pointer with -> operator
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}
