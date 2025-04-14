/*
=====================================================================================
                 C PROGRAMMING: VARIABLES, ASSIGNMENT, AND PRINTING VALUES
=====================================================================================
   This program demonstrates the use of variables, assignment operations, and
   printing multiple values using printf() in C.
=====================================================================================
*/

// Including the standard input-output library for using printf function
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        VARIABLES AND ASSIGNMENT IN C:
        - Variables are used to store data in memory.
        - Each variable has a specific data type (int, float, char, etc.).
        - The assignment operator '=' is used to assign values to variables.
    =====================================================================================
    */

    // Declaring and initializing integer variables
    int i = 10;   // 'i' is assigned a value of 10
    int j = i;    // 'j' is assigned the value of 'i' (10)
    
    // Declaring multiple variables and assigning values in a single line
    int a = 2, b = 3, c = 4, d = 5; 
    
    /*
    =====================================================================================
        PRINTING VARIABLES USING printf():
        - printf() is used to display output on the console.
        - Format specifiers are used to specify the type of data being printed:
            %d - Integer
            %f - Floating point number
            %c - Character
            %s - String
    =====================================================================================
    */

    // Printing the values of variables using format specifiers
    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of a is %d and value of b is %d\n", a, b);
    printf("The value of c is %d and value of d is %d\n", c, d);
    
    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. Variables are used to store values and have specific data types.
2. The assignment operator '=' assigns values to variables.
3. printf() is used to display variable values using format specifiers.
4. Using multiple variables in a single line improves code readability but should be used carefully.
=====================================================================================
*/
