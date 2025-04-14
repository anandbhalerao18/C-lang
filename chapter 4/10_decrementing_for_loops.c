/*
    Topic: Decrementation in C
    -------------------------------------
    Decrementation refers to the process of decreasing the value of a variable by a specific amount.
    In C, it is commonly performed using the `--` (decrement) operator.
    
    Problem Statement:
    ------------------
    - This program demonstrates how decrementation works using a `for` loop.
    - It starts from 5 and decrements until the value reaches 0.

    Key Features of Decrementation:
    --------------------------------
    1. The `--` operator reduces the value of a variable by 1.
    2. It can be used in pre-decrement (`--i`) and post-decrement (`i--`) forms.
    3. It is useful when iterating in reverse order.
*/

#include <stdio.h> // Standard input-output header file

int main() {
    // For loop that starts from 5 and decrements until it reaches 0
    for(int i = 5; i; i--) { 
        printf("%d \n", i); // Printing the current value of `i`
    }
    return 0; // Returning 0 to indicate successful execution
}

/*
    Example Execution:
    ------------------
    Output:
    5
    4
    3
    2
    1
    
    Explanation:
    ------------
    - `int i = 5;` initializes `i` to 5.
    - `i;` acts as the loop condition, meaning the loop runs as long as `i` is non-zero.
    - `i--` decrements `i` by 1 in each iteration.
    - The loop stops once `i` becomes 0.

    Additional Notes:
    -----------------
    - The `for` loop is structured as `for(initialization; condition; update)`.
    - In this case:
        - `int i = 5;` sets the initial value of `i`.
        - `i;` ensures the loop runs as long as `i` is non-zero.
        - `i--` decreases `i` after each iteration.
    - This method is efficient for countdowns, reverse iterations, and handling loops that need to stop at a lower boundary.
*/