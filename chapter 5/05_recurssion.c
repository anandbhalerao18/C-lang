/*
==========================================
            Recursion in C
==========================================

Topic Overview:
---------------
Recursion is a programming technique where a function calls itself to solve a problem.
It is commonly used in mathematical computations, such as calculating factorials,
finding Fibonacci numbers, and solving problems that can be broken down into smaller,
similar subproblems.

==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

// Function prototype for factorial function
int factorial(int n);

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: If n is 0 or 1, return 1
    if (n == 1 || n == 0) {
        return 1;
    }
    
    // Recursive case: n! = n * (n-1)!
    return factorial(n - 1) * n;
}

int main() {
    // Define a variable n to store the number whose factorial is to be calculated
    int n = 10;
    
    // Call the factorial function and store the result in 'result'
    int result = factorial(n);
    
    // Print the calculated factorial
    printf("The factorial of %d is %d", n, result);
    
    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Base Case:**
   - Every recursive function must have a termination condition, called the base case.
   - In this function, when `n == 0` or `n == 1`, the function returns `1`, stopping further recursion.

2. **Recursive Case:**
   - The function calls itself with `n - 1` until the base case is met.
   - Example Calculation for `factorial(5)`:
     ```
     factorial(5) = 5 * factorial(4)
     factorial(4) = 4 * factorial(3)
     factorial(3) = 3 * factorial(2)
     factorial(2) = 2 * factorial(1)
     factorial(1) = 1 (base case)
     ```
     The recursion then resolves:
     ```
     factorial(2) = 2 * 1 = 2
     factorial(3) = 3 * 2 = 6
     factorial(4) = 4 * 6 = 24
     factorial(5) = 5 * 24 = 120
     ```

==========================================
           Real-World Example
==========================================

1. **Calculating Fibonacci Numbers:**
   ```c
   int fibonacci(int n) {
       if (n == 0) return 0;
       if (n == 1) return 1;
       return fibonacci(n - 1) + fibonacci(n - 2);
   }
   ```

2. **Solving Tower of Hanoi:**
   ```c
   void hanoi(int n, char from, char to, char aux) {
       if (n == 1) {
           printf("Move disk 1 from %c to %c\n", from, to);
           return;
       }
       hanoi(n - 1, from, aux, to);
       printf("Move disk %d from %c to %c\n", n, from, to);
       hanoi(n - 1, aux, to, from);
   }
   ```

==========================================
             Summary
==========================================
- Recursion simplifies problems by breaking them into smaller subproblems.
- It is useful for mathematical computations and algorithms like sorting and searching.
- Proper base cases are crucial to prevent infinite recursion.
*/
