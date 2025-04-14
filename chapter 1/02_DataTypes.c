/*
=====================================================================================
                 C PROGRAMMING: DATA TYPES & VARIABLE DECLARATION
=====================================================================================
   This program demonstrates the declaration and initialization of different 
   data types in C, including int, float, double, and char.
=====================================================================================
*/

// Including the standard input-output library for using printf function
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        INTEGER (int) DATA TYPE:
        - The "int" data type is used to store whole numbers (both positive and negative).
        - It typically occupies 4 bytes (32 bits) of memory in most modern systems.
        - The range of values an "int" can store is usually between -2,147,483,648 to 2,147,483,647.
        - Example: "int a = 5;" stores the value 5 in variable 'a'.
    =====================================================================================
    */
    int a = 5; // Declaring an integer variable and assigning it the value 5.

    /*
    =====================================================================================
        FLOATING-POINT (float) DATA TYPE:
        - The "float" data type is used to store decimal numbers.
        - It occupies 4 bytes (32 bits) of memory.
        - It can store values up to 7 decimal places accurately.
        - Example: "float b = 56.9;" assigns the floating-point number 56.9 to variable 'b'.
    =====================================================================================
    */
    float b = 56.9; // Declaring a float variable and assigning it the value 56.9.

    /*
    =====================================================================================
        DOUBLE PRECISION FLOATING-POINT (double) DATA TYPE:
        - The "double" data type is similar to "float" but provides double precision.
        - It typically occupies 8 bytes (64 bits) of memory.
        - It can store values up to 15-16 decimal places accurately.
        - Example: "double c = 89.3;" assigns the double-precision number 89.3 to variable 'c'.
    =====================================================================================
    */
    double c = 89.3; // Declaring a double variable and assigning it the value 89.3.

    /*
    =====================================================================================
        CHARACTER (char) DATA TYPE:
        - The "char" data type is used to store a single character.
        - It occupies 1 byte (8 bits) of memory.
        - Characters must be enclosed in single quotes (' '), NOT double quotes (" ").
        - Example: "char d = 'A';" assigns the character 'A' to variable 'd'.
        - ERROR in original code: "char d = "im a boy";" is incorrect because a "char" 
          variable can only store a single character.
    =====================================================================================
    */
    char d = 'A'; // Declaring a char variable and assigning it a single character.

    /*
    =====================================================================================
        STRINGS IN C:
        - In C, strings are NOT a built-in data type.
        - Strings are stored as arrays of characters with a null terminator '\0'.
        - To store "im a boy" as a string, we need to use a "char array".
        - Correct example: char d[] = "im a boy";
    =====================================================================================
    */
    char str[] = "im a boy"; // Correct way to store a string in C.
    
    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. "#include <stdio.h>" is included to use standard input-output functions.
2. The "main()" function is the entry point of execution.
3. "int a = 5;" declares an integer variable storing whole numbers.
4. "float b = 56.9;" declares a float variable for storing decimal numbers.
5. "double c = 89.3;" declares a double variable with higher precision for decimals.
6. "char d = 'A';" declares a single character variable (fixed the original error).
7. "char str[] = "im a boy";" is the correct way to store a string in C.
=====================================================================================
*/