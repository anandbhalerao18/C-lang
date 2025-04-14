/*
=====================================================================================
                          C PROGRAMMING: HELLO WORLD PROGRAM
=====================================================================================
   This program prints "Hello, World!" on the screen.
   It is often the first program written when learning a new programming language.
=====================================================================================
*/

// Including the standard input-output library for using printf function
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        printf() function:
        - This function is used to print output on the screen.
        - It is defined in the stdio.h (Standard Input Output) library.
        - The text to be printed is enclosed within double quotes ("").
    =====================================================================================
    */
    printf("Hello, World!\n"); // "\n" is used to move the cursor to the next line after printing.
    
    /*
    =====================================================================================
        return 0;
        - This statement indicates that the program has executed successfully.
        - It is mandatory in some compilers (like Turbo C) but optional in modern compilers.
        - Returning 0 means "successful execution".
    =====================================================================================
    */
    return 0;
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. We include "stdio.h" because it contains the printf() function.
2. The "main()" function is the entry point of every C program.
3. "printf("Hello, World!\n");" prints the text "Hello, World!" on the screen.
4. "return 0;" signifies the program executed successfully.
=====================================================================================
*/
