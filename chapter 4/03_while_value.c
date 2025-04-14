/*
    Topic: While Loop and Iteration in C
    ------------------------------------
    A while loop is a control flow statement that allows code to be executed repeatedly
    based on a given condition. The loop continues until the condition becomes false.
    
    Problem Statement:
    ------------------
    - The task is to print the values of 'i' from 0 to 9.
    - We use a while loop to iterate through values efficiently.
    
    Syntax of While Loop:
    ----------------------
    while(condition) {
        // Code to execute repeatedly
    }
    
    - The condition is evaluated before each iteration.
    - If the condition is true, the loop body executes.
    - If the condition becomes false, the loop terminates.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring an integer variable 'i' and initializing it to 0
    int i = 0;
    
    /*
        Using a 'while' loop to print the values of 'i' from 0 to 9.
        ------------------------------------------------------------
        - The loop starts with i = 0.
        - It runs while the condition (i < 10) is true.
        - In each iteration, the current value of 'i' is printed.
        - The value of 'i' is incremented by 1 in each iteration to avoid an infinite loop.
    */
    while (i < 10) {
        printf("The value of i is %d\n", i);
        i++; // Incrementing 'i' to move towards termination
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    1. If we run this code, it will print values from 0 to 9 on the screen.
    2. If we change the condition to 'i < 5', it will print only 0 to 4.
    3. If we forget to increment 'i', the loop will run infinitely, causing an error.

    Alternative Approach:
    ----------------------
    - The same logic can be implemented using a 'for' loop:

      for(int i = 0; i < 10; i++) {
          printf("The value of i is %d\n", i);
      }

    Notes:
    ------
    - The while loop is useful when the number of iterations is not known beforehand.
    - Ensure that the loop condition eventually becomes false to avoid infinite loops.
    - Loops are widely used in low-level programming for process control and iterative tasks.
*/
