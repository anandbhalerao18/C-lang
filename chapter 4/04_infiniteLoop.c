/*
    Topic: Infinite Loop in C
    ------------------------------------
    An infinite loop occurs when a loop's termination condition is never met.
    This results in the loop running indefinitely, which may cause system hangs or crashes.
    
    Problem Statement:
    ------------------
    - This program demonstrates an infinite loop using a while statement.
    - The loop condition (i < 10) is present, but there is no increment for 'i'.
    - Since 'i' never changes, the condition remains true forever, leading to an infinite loop.
    
    Syntax of While Loop:
    ----------------------
    while(condition) {
        // Code to execute repeatedly
    }
    
    - The condition is evaluated before each iteration.
    - If the condition is true, the loop body executes.
    - If the condition is never made false, the loop runs infinitely.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring an integer variable 'i' and initializing it to 0
    int i = 0;
    
    /*
        Infinite Loop Demonstration:
        ----------------------------
        - The loop starts with i = 0.
        - The condition (i < 10) is always true because 'i' is never incremented.
        - The printf statement executes infinitely, continuously printing values of 'i'.
        - This creates an infinite loop, leading to unwanted behavior or system issues.
    */
    while (i < 10) {
        printf("The value of i is %d\n", i);
        // i++; // Missing increment causes an infinite loop
    }
    
    return 0; // This line will never execute due to the infinite loop
}

/*
    Example Scenarios:
    ------------------
    1. If we run this code, the statement inside the loop will print indefinitely.
    2. The program must be forcefully stopped (Ctrl+C in terminal) since it never exits.
    3. If we add 'i++' inside the loop, the loop will execute normally and stop at i = 9.

    Fixing the Infinite Loop:
    --------------------------
    - Always ensure that the loop condition eventually becomes false.
    - Corrected Code:

      while (i < 10) {
          printf("The value of i is %d\n", i);
          i++; // Now, i increments, and the loop exits at i = 10.
      }

    Notes:
    ------
    - Infinite loops can occur unintentionally due to logical errors.
    - They are sometimes used intentionally in embedded systems or real-time applications.
    - In low-level programming, infinite loops can cause CPU resource wastage or crashes.
*/
