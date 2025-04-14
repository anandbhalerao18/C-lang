// ---------------------------------------------
// 📘 Program Title: Input and Display Marks of 5 Students Using Arrays and Loop in C
// 🧾 Description:
// This program accepts marks of 5 students using an array and a loop,
// then displays each mark along with its index position.
// ---------------------------------------------

#include <stdio.h> // 📚 Header file for standard input and output functions like printf() and scanf()

// 🌟 Entry point of the C program
int main() {
    
    // ---------------------------------------------
    // 📦 Step 1: Declaration of Array
    // ---------------------------------------------
    int marks[5];  // 📌 Declaring an array named 'marks' that can store 5 integers
                   // Arrays in C are 0-indexed, so valid indices are: 0, 1, 2, 3, 4

    // ---------------------------------------------
    // ✍️ Step 2: Prompt user for input
    // ---------------------------------------------
    printf("Enter marks of 5 students \n");  // 📢 Display message to user for input

    // ---------------------------------------------
    // 🛠️ Old way (Manual Input - Not recommended for larger data)
    // ---------------------------------------------
    // This method works but is inefficient for many students
    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    // ---------------------------------------------
    // 🔁 Step 3: Use a for loop to take input and print each value
    // ---------------------------------------------
    for (int i = 0; i < 5; i++) {
        // 🧾 Input: Take marks of each student using scanf
        // &marks[i] gives the address of the i-th element in the array
        scanf("%d", &marks[i]);

        // 🖨️ Output: Display the entered mark along with its index position
        printf("%d is on index %d \n", marks[i], i);
    }

    // ✅ End of program
    return 0;  // 🚪 return 0 indicates successful program execution
}
