/*
=====================================================================================
                 C PROGRAMMING: VARIABLES, OPERATORS, AND PRINTING VALUES
=====================================================================================
   This program demonstrates the use of variables, assignment operations,
   arithmetic operations (addition and modulus), and printing results using printf() in C.
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
    int a = 5;   // 'a' is assigned a value of 5
    int b = 44;  // 'b' is assigned a value of 44
    int c = a + b;  // 'c' stores the sum of 'a' and 'b'
    
    /*
    =====================================================================================
        ARITHMETIC OPERATORS IN C:
        - '+'  : Addition
        - '-'  : Subtraction
        - '*'  : Multiplication
        - '/'  : Division
        - '%'  : Modulus (Remainder of division)
    =====================================================================================
    */

    // Printing the values of a, b, and their sum
    printf("The value of a is %d and the value of b is %d. The addition result is %d\n", a, b, c);

    /*
    =====================================================================================
        MODULUS OPERATOR '%':
        - The modulus operator gives the remainder when one number is divided by another.
        - Example:
            10 % 3 = 1  (10 divided by 3 gives remainder 1)
            44 % 5 = 4  (44 divided by 5 gives remainder 4)
    =====================================================================================
    */
    
    // Printing the remainder of 'a' divided by 'b'
    printf("The remainder of a divided by b is %d\n", a % b);
    
    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. Variables store values and have specific data types.
2. The assignment operator '=' is used to assign values.
3. Arithmetic operators (+, -, *, /, %) perform basic mathematical operations.
4. The modulus operator '%' returns the remainder of division.
5. printf() is used to display variable values and results using format specifiers.
=====================================================================================
*/