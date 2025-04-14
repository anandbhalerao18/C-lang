/*
    Topic: Switch Statement in C
    ---------------------------------
    The switch statement is a multi-way branching control structure that allows
    a variable to be tested for equality against multiple constant values.
    
    Instead of using multiple 'if-else' conditions, the switch statement provides
    a cleaner and more efficient way to handle multiple possible cases.
    
    Syntax of Switch Statement:
    ---------------------------
    switch (expression) {
        case value1:
            // Code to execute if expression == value1
            break;
        case value2:
            // Code to execute if expression == value2
            break;
        ...
        default:
            // Code to execute if none of the above cases match
    }
    
    - The expression inside 'switch' is evaluated.
    - The program checks for a matching 'case' value.
    - If a match is found, the corresponding block executes until a 'break' statement is encountered.
    - The 'default' case executes if no match is found.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring an integer variable 'a' to store user input
    int a;
    
    // Prompting the user to enter a number
    printf("Enter a = ");
    scanf("%d", &a); // Reading the input value into 'a'
    
    /*
        Using the Switch Statement:
        ---------------------------
        - Evaluates the value of 'a'.
        - Executes the corresponding 'case' block if a match is found.
        - The 'break' statement prevents fall-through to the next case.
        - If no case matches, the 'default' block executes.
    */
    switch(a) {
        case 1:
            printf("You entered 1 \n");
            break;
        case 2:
            printf("You entered 2 \n");
            break;
        case 3:
            printf("You entered 3 \n");
            break;
        case 4:
            printf("You entered 4 \n");
            break;
        
        /*
            Default Case:
            -------------
            - If 'a' is not 1, 2, 3, or 4, this block executes.
            - It informs the user that the input did not match any predefined case.
        */
        default:
            printf("Nothing matched \n");
            break;
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    Let's consider different user inputs:
    1. If user enters 1 → Output: "You entered 1"
    2. If user enters 3 → Output: "You entered 3"
    3. If user enters 4 → Output: "You entered 4"
    4. If user enters 7 → Output: "Nothing matched"
    
    Notes:
    ------
    - The switch statement is efficient for handling multiple conditions.
    - Each 'case' must end with a 'break' statement to prevent fall-through.
    - The 'default' case ensures an output even when no cases match.
    - Switch statements work with integer and character expressions but not with floating-point numbers.
    - It is widely used in low-level programming for command handling and state management.
*/
