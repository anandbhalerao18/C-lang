/*
==========================================
                Functions in C
==========================================

Topic Overview:
---------------
In C programming, functions are blocks of code that perform specific tasks.
Functions help in modular programming, making the code more organized and reusable.

Types of functions in C:
1. **Library Functions** - Predefined functions like `printf()`, `scanf()`, etc.
2. **User-Defined Functions** - Functions created by the programmer for custom operations.

Each function consists of:
- **Function Definition**: The block of code that performs a task.
- **Function Call**: The statement that invokes the function.
- **Function Parameters**: Values passed to the function for processing.
- **Return Type**: Specifies the type of value returned by the function (if any).


==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

// Function to calculate sum of two numbers
void sum(int a, int b) {
    printf("The sum of the numbers is %d \n", a + b);
}

// Function to calculate multiplication of two numbers
void mult(int a, int b) {
    printf("The multiplication of the numbers is %d \n", a * b);
}

// Function to calculate division of two numbers
void div(int a, int b) {
    if (b != 0) { // Check to avoid division by zero
        printf("The division of the numbers is %d \n", a / b);
    } else {
        printf("Error: Division by zero is not allowed!\n");
    }
}

// Function to calculate subtraction of two numbers
void sub(int a, int b) {
    printf("The subtraction of the numbers is %d \n", a - b);
}

int main() {
    // Function calls with values 5 and 6
    sum(5, 6);    // Calls sum function
    sub(5, 6);    // Calls sub function
    mult(5, 6);   // Calls mult function
    div(5, 6);    // Calls div function
    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Function Definitions**:
   - Each function takes two integer parameters (`a` and `b`).
   - The operations performed are addition, subtraction, multiplication, and division.
   - Each function prints the result of its operation.

2. **Function Calls in `main()`**:
   - The `main()` function calls each arithmetic function and passes values `5` and `6`.
   - The execution sequence follows the function calls.

3. **Corrected Issues**:
   - The original function definitions incorrectly stated "The addition of the numbers is" for all operations.
   - These have been corrected to display the correct operation being performed.
   - `div()` now includes a check to prevent division by zero.

==========================================
           Real-World Example
==========================================
1. **Modular Code Design**:
   - Instead of writing repetitive code, we use functions to perform operations efficiently.
   ```c
   int add(int a, int b) {
       return a + b;
   }
   int main() {
       int result = add(10, 20);
       printf("Result: %d", result);
   }
   ```

2. **Code Reusability**:
   - Functions allow reusing code instead of duplicating it in multiple places.

==========================================
             Summary
==========================================
- Functions break down complex logic into smaller, manageable parts.
- They help in code reusability, organization, and readability.
- Proper function design leads to efficient program execution.
*/