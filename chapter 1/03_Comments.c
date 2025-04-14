/*
=====================================================================================
                 C PROGRAMMING: COMMENTS AND ERROR PREVENTION
=====================================================================================
   This program demonstrates the importance of using comments in C programming.
   It also explains how to prevent errors in code by using comments correctly.
=====================================================================================
*/

// Including the standard input-output library for using printf function
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        COMMENTS IN C:
        - Comments are used to explain code and make it more readable.
        - They are ignored by the compiler and do not affect the execution.
        - There are two types of comments in C:
            1. Single-line comments: Starts with "//".
            2. Multi-line comments: Enclosed within "/*...*/".
    =====================================================================================
    */

    // Example of a single-line comment:
    // This line is ignored by the compiler.

    /*
    Example of a multi-line comment:
    This type of comment is useful for longer explanations.
    It can span multiple lines without needing "//" on each line.
    */

    /*
    =====================================================================================
        WHY COMMENT OUT ERRONEOUS LINES?
        - If a line of code has an error but needs to be kept for reference,
          we can comment it out instead of deleting it.
        - This is useful during debugging.
    =====================================================================================
    */

    // Example: This line contains an error, but we comment it out to prevent issues.
    // int a = "hello"; // ERROR: Mismatched data type (string assigned to int).

    // Printing a message to confirm the program runs correctly
    printf("This line was successfully commented\n");

    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. "#include <stdio.h>" is included to use standard input-output functions.
2. The "main()" function is the entry point of execution.
3. Comments help explain code and improve readability.
4. Two types of comments exist: single-line (//) and multi-line (/*...*/).
5. We can comment out problematic lines to prevent errors while debugging.
6. "printf" function is used to display messages to the console.
=====================================================================================
*/