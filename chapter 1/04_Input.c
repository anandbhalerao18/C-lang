/*
=====================================================================================
                 C PROGRAMMING: USER INPUT AND OUTPUT
=====================================================================================
   This program demonstrates how to take user input and display output in C.
   It explains the use of scanf() for input and printf() for output.
=====================================================================================
*/

// Including the standard input-output library for using scanf and printf functions
#include <stdio.h> 

// The main function: Execution starts from here
int main() {

    /*
    =====================================================================================
        USER INPUT IN C:
        - The "scanf()" function is used to take input from the user.
        - It requires format specifiers to determine the type of input data.
        - The "&" (address-of) operator is used with variables in scanf() to store the input value.
    =====================================================================================
    */

    // Declaring integer variables
    int a, b;
    
    // Taking input for integer variables
    printf("Enter an integer value for a: ");
    scanf("%d", &a); // Stores user input in variable 'a'
    
    printf("Enter an integer value for b: ");
    scanf("%d", &b); // Stores user input in variable 'b'
    
    // Displaying the entered integer values
    printf("This is the value of a = %d \n", a);
    printf("This is the value of b = %d \n", b);

    /*
    =====================================================================================
        FLOAT INPUT IN C:
        - The float data type is used to store decimal values.
        - The format specifier for float input/output is "%f".
    =====================================================================================
    */
    
    // Declaring a float variable
    float d;
    
    // Taking input for a float variable
    printf("Enter a floating-point number: ");
    scanf("%f", &d); // Stores user input in variable 'd'
    
    // Displaying the entered float value
    printf("The value of float is %f \n", d);
    
    /*
    =====================================================================================
        CHARACTER INPUT IN C:
        - The char data type is used to store a single character.
        - The format specifier for char input/output is "%c".
        - A common issue: scanf("%c", &char_variable) after an integer or float input
          does not work as expected because of the leftover newline character in the buffer.
        - Solution: Use " getchar() " before scanf("%c", &char_variable) to clear the buffer.
    =====================================================================================
    */
    
    // Declaring a character variable
    char name;
    
    // Clearing the input buffer to avoid issues with character input
    getchar();
    
    // Taking input for a character variable
    printf("Enter a single character: ");
    scanf("%c", &name); // Stores user input in variable 'name'
    
    // Displaying the entered character
    printf("This is the value of character: %c \n", name);
    
    return 0; // Indicates successful execution of the program.
}

/*
=====================================================================================
                               EXPLANATION SUMMARY
=====================================================================================
1. "#include <stdio.h>" is included to use standard input-output functions.
2. The "main()" function is the entry point of execution.
3. "scanf()" is used to take user input, and "printf()" is used to display output.
4. "%d" is used for integers, "%f" is used for floating-point numbers, and "%c" is used for characters.
5. The "&" operator is required in scanf() to store the input value in a variable.
6. "getchar()" is used to clear the buffer before taking a character input after numeric inputs.
=====================================================================================
*/