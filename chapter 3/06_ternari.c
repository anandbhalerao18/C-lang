/*
    Topic: Ternary Operator in C
    ---------------------------------
    The ternary operator (also known as the conditional operator) is a shorthand for an if-else statement.
    It is used to evaluate a condition in a single line and return one of two possible values based on whether the condition is true or false.
    
    Syntax of the Ternary Operator:
    ------------------------------
    condition ? expression_if_true : expression_if_false;
    
    - If the condition is true, 'expression_if_true' is executed.
    - If the condition is false, 'expression_if_false' is executed.
    - This operator is useful for short and simple decision-making statements.
*/

#include <stdio.h> // Standard input-output header file

int main() { 
    // Declaring two integer variables
    int a = 456;       // Assigning value 456 to 'a'
    int b = 84444444;  // Assigning value 84444444 to 'b'
    
    /*
        Using the Ternary Operator:
        ---------------------------
        - The condition (a > b) is evaluated.
        - If 'a' is greater than 'b', it prints "A is greater".
        - Otherwise, it prints "B is greater".
        
        NOTE: The original code had an incorrect syntax in the false case.
        - Instead of ("B iis greater"), we should use printf("B is greater").
    */
    a > b ? printf("A is greater\n") : printf("B is greater\n");

    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    Let's consider different values of a and b:
    1. If a = 456, b = 84444444 → Output: "B is greater"
    2. If a = 10000, b = 5000 → Output: "A is greater"
    3. If a = 200, b = 200 → Output: "B is greater" (since the condition a > b is false)

    Notes:
    ------
    - The ternary operator is an alternative to an if-else statement for simple conditions.
    - It improves code readability and reduces the number of lines.
    - It should be used for short conditions; for complex decision-making, if-else is preferable.
    - The ternary operator is widely used in embedded systems, low-level programming, and optimization cases.
*/
