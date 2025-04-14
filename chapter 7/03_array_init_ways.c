// ---------------------------------------------
// 📘 Program Title: CGPA Input using Arrays and Understanding Memory Representation in C
// 🧾 Description:
// This program demonstrates how to take input for CGPAs using an array
// and how data is stored in memory (contiguous block with same data type).
// ---------------------------------------------

#include <stdio.h> // Standard input/output library

int main() {

    // ---------------------------------------------
    // 📦 Step 1: Array Declaration with Initial Values
    // ---------------------------------------------
    int cgpa[3] = {5, 6, 7};  // Declaring and initializing an array of size 3
                              // Initial values: 5, 6, 7 (can be overwritten with user input)

    // ---------------------------------------------
    // 🔁 Step 2: Using a loop for input/output
    // ---------------------------------------------
    for (int i = 0; i < 3; i++) {
        // 🎯 Input from user
        // scanf() stores the input at the address of cgpa[i]
        scanf("%d", &cgpa[i]);

        // 📤 Output to display value and its index
        printf("%d is on index %d \n", cgpa[i], i);
    }

    // ---------------------------------------------
    // 🧠 Step 3: Understanding Array Memory
    // ---------------------------------------------
    // Arrays are stored in contiguous memory.
    // Each integer takes 4 bytes (on most systems).
    // Let's print the addresses of each element:
    printf("\n🔍 Memory Addresses of Each Element in Array:\n");
    for (int i = 0; i < 3; i++) {
        printf("Address of cgpa[%d] = %p \n", i, (void*)&cgpa[i]);
    }

    return 0;  // ✅ Successful execution
}
