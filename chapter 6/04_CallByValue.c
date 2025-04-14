/*
----------------------------------------------------
            CALL BY VALUE IN C
----------------------------------------------------

- Call by Value is a parameter passing mechanism in C.
- In this approach, when a function is called, the actual values of the arguments
  are copied into the function parameters.
- Changes made to parameters inside the function do not affect the original values.
- This is because the function works with a copy of the actual values, not the original variables.

----------------------------------------------------
            EXAMPLE OF CALL BY VALUE
----------------------------------------------------
*/

#include <stdio.h>  // Standard input-output library

// Function declaration (prototype) for sum
int sum(int, int);  // Declares that sum takes two integers as input and returns an integer

// Function definition of sum
// This function takes two integer arguments (a and b), adds them, and returns the sum
int sum(int a, int b) {
    return a + b;  // Returning the sum of a and b
}

// Main function - execution starts from here
int main() {
    // Calling the sum function with values 1 and 6
    // The values 1 and 6 are passed as arguments, and copies of these values are used inside the function
    printf("The sum of 1 and 6 is %d", sum(1, 6));
    
    return 0;  // Indicating that the program executed successfully
}

/*
----------------------------------------------------
        DETAILED EXPLANATION OF THE CODE
----------------------------------------------------
1. The program starts by including the <stdio.h> library, which allows us to use printf.
2. We declare a function prototype for sum(int, int), ensuring that the compiler knows about it before main().
3. The sum function is defined to take two integers as arguments, add them, and return the result.
4. In the main function, we call sum(1, 6), passing the values 1 and 6.
5. The values 1 and 6 are copied into the function's parameters (a and b), and their sum is calculated.
6. Since this is Call by Value, the original values remain unchanged outside the function.
7. The computed sum is displayed using printf().

----------------------------------------------------
        KEY POINTS ABOUT CALL BY VALUE
----------------------------------------------------
- The function gets copies of the arguments, not the original variables.
- Any modification inside the function does not reflect in the actual variables.
- It ensures that original values remain unchanged.

----------------------------------------------------
        EXAMPLE TO UNDERSTAND THE CONCEPT
----------------------------------------------------
#include <stdio.h>

void modify(int x) {
    x = 100;  // This change will not affect the original value
}

int main() {
    int a = 10;
    printf("Before function call: %d\n", a);
    modify(a);
    printf("After function call: %d\n", a); // Value remains 10, proving call by value
    return 0;
}
*/
