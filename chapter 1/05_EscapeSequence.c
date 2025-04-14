/*
=====================================================================================
                 C PROGRAMMING: USER INPUT, OUTPUT, AND SPECIAL CHARACTERS
=====================================================================================
   This program demonstrates how to take user input, display output, and handle 
   character assignments, escape sequences, and special characters in C.
=====================================================================================
*/

// Including the standard input-output library for using scanf and printf functions
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        CHARACTER HANDLING IN C:
        - The "char" data type is used to store a single character.
        - Characters are enclosed in single quotes (' '), e.g., 'a', 'Z', '@'.
        - The latest assigned value overwrites the previous value.
    =====================================================================================
    */

    // Declaring an integer variable
    int a;
    
    // Declaring a character variable and assigning different values
    char ch = 'a'; // Initializing character variable with 'a'
    ch = 'c'; // Overwriting 'a' with 'c'
    ch = '\n'; // Overwriting 'c' with a newline character

    /*
    =====================================================================================
        ESCAPE SEQUENCES IN C:
        - Escape sequences are special characters preceded by a backslash (\).
        - They perform specific formatting functions.
        - Common escape sequences:
            \n  - Newline (moves to the next line)
            \t  - Horizontal tab
            \\  - Backslash
            \"  - Double quote
            \'  - Single quote
    =====================================================================================
    */

    // Demonstrating the use of escape sequences in printf()
    printf("hey I am good \" nice  \n"); // Prints double quotes within a string
    printf("hey I am good \\ nice \n");  // Prints a single backslash
    printf("hey I am good \\n nice \n"); // Prints \n as text

    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. The "char" data type can store a single character at a time.
2. Assigning a new value to a character variable overwrites the previous value.
3. Escape sequences are used to format output and include special characters.
4. "\n" moves the cursor to a new line, "\\" prints a backslash, and "\"" prints double quotes.
=====================================================================================
*/
