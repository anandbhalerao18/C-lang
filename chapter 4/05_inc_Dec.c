/*
    Topic: Increment and Decrement in C
    -------------------------------------
    Increment and decrement operations are fundamental in C programming.
    They allow us to increase or decrease the value of a variable efficiently.

    Problem Statement:
    ------------------
    - This program demonstrates how to modify the value of a variable using increment operations.
    - We start with a variable `i`, perform addition, and use the increment operator.

    Increment Operators:
    ---------------------
    1. `i++` (Post-increment) → Increases value after using it.
    2. `++i` (Pre-increment) → Increases value before using it.

    Decrement Operators:
    ---------------------
    1. `i--` (Post-decrement) → Decreases value after using it.
    2. `--i` (Pre-decrement) → Decreases value before using it.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring an integer variable 'i' and initializing it to 5
    int i = 5;
    
    // Printing the initial value of 'i'
    printf("The value of i is %d \n", i);
    
    // Adding 5 to 'i' (i = i + 5) → New value: 10
    i = i + 5;
    printf("The value of i after adding 5 is %d \n", i);
    
    // Incrementing 'i' by 1 using 'i++' (Post-increment)
    i++;
    printf("The value of i after incrementing is %d \n", i);
    
    return 0;
}

/*
    Example Scenarios:
    ------------------
    1. Initial value of `i` is 5.
    2. `i = i + 5` increases it to 10.
    3. `i++` increments `i` from 10 to 11.
    4. The final printed value is 11.

    Additional Notes:
    -----------------
    - Increment and decrement operators are frequently used in loops.
    - They optimize performance by reducing redundant operations (`i = i + 1` can be replaced with `i++`).
    - Pre-increment (`++i`) is slightly faster than post-increment (`i++`) in some cases.
    - Decrement (`i--` or `--i`) works similarly but reduces the value instead of increasing it.
*/
