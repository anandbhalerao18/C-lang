/*
=====================================================================================
                     C PROGRAMMING: VARIABLE DECLARATION & ASSIGNMENT
=====================================================================================
   This program demonstrates how to declare a variable, assign a value to it,
   and print its value using the printf function in C.
=====================================================================================
*/

// Including the standard input-output library for using printf function
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        Variable Declaration:
        - "int a;" declares a variable named 'a' of type integer.
        - In C, variables must be declared before they are used.
    =====================================================================================
    */
    int a; 

    /*
    =====================================================================================
        Variable Assignment:
        - "a = 7;" assigns the value 7 to the variable 'a'.
        - Now, 'a' holds the integer value 7 in memory.
    =====================================================================================
    */
    a = 7;

    /*
    =====================================================================================
        printf() function:
        - Used to display output on the screen.
        - "%d" is a format specifier that prints an integer value.
        - "printf("%d", a);" prints the value stored in variable 'a'.
    =====================================================================================
    */
    printf("%d", a);
    
    /*
    =====================================================================================
        return 0;
        - This statement signifies successful program execution.
        - It tells the operating system that the program ended successfully.
    =====================================================================================
    */
    return 0;
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. We include "stdio.h" to use the printf() function.
2. The "main()" function is the starting point of execution.
3. "int a;" declares an integer variable 'a'.
4. "a = 7;" assigns the value 7 to 'a'.
5. "printf("%d", a);" prints the value of 'a' (which is 7).
6. "return 0;" signifies successful execution of the program.
=====================================================================================
*/
