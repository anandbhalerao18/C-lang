/*
    Topic: else-if Statement in C
    ---------------------------------
    The else-if ladder in C is used to check multiple conditions sequentially.
    It helps to make decisions based on multiple possible cases.
    
    Syntax of else-if:
    ------------------
    if (condition1) {
        // Executes if condition1 is true
    }
    else if (condition2) {
        // Executes if condition2 is true
    }
    else {
        // Executes if none of the conditions are true
    }
    
    - The conditions are checked from top to bottom.
    - Once a true condition is found, the corresponding block executes, and the rest are ignored.
    - If no conditions are met, the final 'else' block executes.
*/

#include <stdio.h> // Standard input-output header file

int main() {
    // Declaring an integer variable 'age' and assigning it a value of 86
    int age = 86;
    
    /*
        First Condition: if (age > 60)
        --------------------------------
        - Checks if the age is greater than 60.
        - If true, it prints that the person can drive and is a senior citizen.
        - If false, it moves to the next else-if condition.
    */
    if (age > 60) {
        printf("You can drive and you are a senior citizen \n");
    }
    
    /*
        Second Condition: else if (age > 18)
        ------------------------------------
        - Checks if the age is greater than 18 but not greater than 60.
        - If true, it prints that the person can drive.
        - If false, it moves to the else block.
    */
    else if (age > 18) {
        printf("You can drive \n");
    }
    
    /*
        Default Case: else
        -------------------
        - If none of the above conditions are met, this block executes.
        - It prints that the person cannot drive (i.e., age is 18 or less).
    */
    else {
        printf("You cannot drive \n");
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    Let's test with different values of 'age':
    1. If age = 86 → Output: "You can drive and you are a senior citizen"
    2. If age = 45 → Output: "You can drive"
    3. If age = 17 → Output: "You cannot drive"
    
    Notes:
    ------
    - The 'if' condition checks the first case.
    - If the 'if' condition fails, the 'else if' is checked.
    - If all conditions fail, the 'else' statement executes.
    - The else-if ladder is useful when multiple conditions need to be checked in sequence.
    - It is widely used in decision-making programs.
*/
