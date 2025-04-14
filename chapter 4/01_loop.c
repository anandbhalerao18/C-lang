/*
    Topic: Logic Building in C
    ---------------------------------
    In programming, logic building refers to constructing an efficient and optimized solution to a given problem.
    Writing code that efficiently solves a problem is essential, especially in low-level programming and computer architecture.
    
    Problem Statement:
    ------------------
    - The task is to print "Happy Birthday!" 100,000 times.
    - Using a simple 'printf' statement will print the message only once.
    - To repeat the output multiple times, a loop is necessary.
    - We can use a 'for' loop, 'while' loop, or recursion for repetition.
    
    Efficient Approach:
    -------------------
    - Instead of writing 100,000 printf statements, we use a loop to reduce redundancy.
    - The 'for' loop is the most suitable approach for such tasks.
*/

#include <stdio.h> // Standard input-output header file

int main() {
    // Declaring an integer variable 'i' for loop control
    int i;
    
    /*
        Using a 'for' loop to repeat the print statement 100,000 times.
        --------------------------------------------------------------
        - The loop starts from i = 0 and runs until i < 100000.
        - In each iteration, "Happy Birthday!" is printed.
        - The loop counter 'i' increases by 1 in each iteration.
    */
    for(i = 0; i < 100000; i++) {
        printf("Happy Birthday!\n");
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    1. If we run this code, "Happy Birthday!" will be printed 100,000 times on the screen.
    2. If we change '100000' to '10', it will print the message only 10 times.
    3. If we use a 'while' loop instead of a 'for' loop, it will work similarly:

       int i = 0;
       while(i < 100000) {
           printf("Happy Birthday!\n");
           i++;
       }

    Notes:
    ------
    - Using loops reduces redundancy and makes the code efficient.
    - Printing a large number of messages at once may slow down execution.
    - Instead of printing to the screen, we can write to a file to avoid performance issues.
    - Looping concepts are widely used in low-level programming for control flow and optimization.
*/
