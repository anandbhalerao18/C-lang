/*
    Topic: Do-While Loop in C
    -------------------------------------
    A `do-while` loop is a type of loop that executes a block of code at least once,
    regardless of the condition. The loop will continue executing as long as the
    specified condition remains true.

    Problem Statement:
    ------------------
    - This program demonstrates the working of a `do-while` loop.
    - It initializes a variable `i`, prints its value, and increments it in each iteration.
    - The loop runs until `i` becomes 4.

    Key Features of a Do-While Loop:
    ---------------------------------
    1. Executes **at least once**, even if the condition is false initially.
    2. Condition is checked **after** executing the loop body.
    3. Used when we need to ensure the block runs at least one time.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring an integer variable 'i' and initializing it to 0
    int i = 0;
    
    // Do-While Loop starts here
    do {
        // Printing the value of 'i' in the current iteration
        printf("The value of i is %d \n", i);
        
        // Incrementing 'i' by 1
        i++;
    } while (i < 4); // Condition to continue looping
    
    return 0;
}

/*
    Example Scenarios:
    ------------------
    1. Initially, `i = 0`, so the loop executes.
    2. The value of `i` is printed, then incremented.
    3. This process repeats until `i = 4`, where the condition fails.
    4. Output will be:
       The value of i is 0
       The value of i is 1
       The value of i is 2
       The value of i is 3

    Additional Notes:
    -----------------
    - The main difference between `while` and `do-while` loops is that `do-while`
      ensures execution at least once.
    - Useful when user input validation is required (e.g., asking for input until valid).
*/
