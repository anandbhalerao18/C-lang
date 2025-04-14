/*
    Topic: For Loop in C
    -------------------------------------
    A `for` loop is a control flow statement that allows code to be executed repeatedly 
    based on a given condition. It is widely used when the number of iterations is known beforehand.

    Problem Statement:
    ------------------
    - This program demonstrates the working of a `for` loop.
    - It takes an integer input from the user and prints its multiplication table up to 10.

    Key Features of a For Loop:
    ----------------------------
    1. Consists of three parts: **initialization, condition, and update**.
    2. Efficient when the number of iterations is known in advance.
    3. Helps in reducing redundant code and improving readability.
*/

#include <stdio.h> // Standard input-output header file

int main() {
    int numb; // Declaring an integer variable to store user input
    
    // Prompting the user to enter a number
    printf("Enter Number = ");
    scanf("%d", &numb); // Using `&` to store input in variable `numb`
    
    int n = 10; // Defining the limit for the multiplication table
    
    // For loop to iterate from 0 to `n`
    for (int i = 0; i <= n; i++) {
        // Printing the multiplication result for each iteration
        printf("The value of %d X %d is %d \n", numb, i, i * numb);
    }
    
    return 0; // Returning 0 to indicate successful execution
}

/*
    Example Scenarios:
    ------------------
    1. If the user inputs `5`, the output will be:
       The value of 5 X 0 is 0
       The value of 5 X 1 is 5
       The value of 5 X 2 is 10
       ...
       The value of 5 X 10 is 50
    
    2. If the user inputs `8`, the output will be:
       The value of 8 X 0 is 0
       The value of 8 X 1 is 8
       The value of 8 X 2 is 16
       ...
       The value of 8 X 10 is 80

    Additional Notes:
    -----------------
    - The `for` loop is structured as `for(initialization; condition; update)`.
    - In this example:
        - `int i = 0;` initializes `i` to 0.
        - `i <= n;` ensures the loop runs until `i` reaches `n`.
        - `i++` increments `i` in each iteration.
    - This method efficiently prints a multiplication table without redundant code.
*/
