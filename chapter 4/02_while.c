/*
    Topic: While Loop in C
    ---------------------------------
    A while loop is a control flow statement that allows code to be executed repeatedly
    based on a given condition. The loop continues until the condition becomes false.
    
    Problem Statement:
    ------------------
    - The task is to print "Happy Birthday!" 50 times.
    - We use a while loop to repeat the statement efficiently.
    
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
        Using a 'while' loop to repeat the print statement 50 times.
        ------------------------------------------------------------
        - The loop starts with i = 0.
        - It runs while the condition (i < 50) is true.
        - In each iteration, "Happy Birthday!" is printed.
        - The value of 'i' is incremented by 1 in each iteration to avoid an infinite loop.
    */
    while(i < 50) {
        printf("Happy Birthday!\n");
        i = i + 1; // Incrementing 'i' to move towards termination
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    1. If we run this code, "Happy Birthday!" will be printed 50 times on the screen.
    2. If we change the condition to 'i < 10', it will print only 10 times.
    3. If we forget to increment 'i', the loop will run infinitely, causing an error.

    Alternative Approach:
    ----------------------
    - The same logic can be implemented using a 'for' loop:

      for(int i = 0; i < 50; i++) {
          printf("Happy Birthday!\n");
      }

    Notes:
    ------
    - The while loop is useful when the number of iterations is not known beforehand.
    - Ensure that the loop condition eventually becomes false to avoid infinite loops.
    - Loops are widely used in low-level programming for process control and iterative tasks.
*/
