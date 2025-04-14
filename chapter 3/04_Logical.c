/*
    Topic: Logical Operators in C
    ---------------------------------
    Logical operators are used to perform logical operations in C programming.
    These operators return either 0 (false) or 1 (true) based on the logical evaluation.
    
    There are three main logical operators:
    1. Logical AND (&&) - Returns true if both conditions are true.
    2. Logical OR  (||) - Returns true if at least one condition is true.
    3. Logical NOT (!)  - Returns the opposite of the condition.
*/

#include <stdio.h> // Standard input-output header file

int main() {
    // Declaring two integer variables
    int a = 1; // '1' represents a true value in logical operations
    int b = 1; // '1' represents a true value in logical operations

    /*
        Using Logical AND (&&) Operator:
        --------------------------------
        The expression (a && b) will return 1 (true) because both a and b are non-zero (true).
        Logical AND returns true if both operands are true; otherwise, it returns false.
    */
    printf("The value of a AND b (a && b) is: %d \n", a && b);

    /*
        Using Logical OR (||) Operator:
        --------------------------------
        The expression (a || b) will return 1 (true) because at least one of a or b is non-zero (true).
        Logical OR returns true if at least one operand is true; otherwise, it returns false.
    */
    printf("The value of a OR b (a || b) is: %d \n", a || b);

    /*
        Using Logical NOT (!) Operator:
        --------------------------------
        The expression (!a) will return 0 (false) because a is 1 (true), and NOT operator negates it.
    */
    printf("The value of NOT(a) (!a) is: %d \n", !a);

    /*
        Logical Expression in IF Condition:
        -------------------------------------
        Here, the condition (a && b) is evaluated.
        If the result is true (1), the block of code inside the 'if' statement executes.
    */
    if (a && b) {
        printf("Both a and b are true \n");
    }
    
    return 0; // Indicating successful program execution
}

/*
    Example Scenarios:
    ------------------
    Let's consider different values of a and b:
    1. If a = 1, b = 1 → (a && b) = 1, (a || b) = 1, (!a) = 0
    2. If a = 1, b = 0 → (a && b) = 0, (a || b) = 1, (!a) = 0
    3. If a = 0, b = 1 → (a && b) = 0, (a || b) = 1, (!a) = 1
    4. If a = 0, b = 0 → (a && b) = 0, (a || b) = 0, (!a) = 1

    Notes:
    ------
    - In C, any non-zero number is considered 'true', and zero (0) is considered 'false'.
    - Logical operators are widely used in decision-making statements like if-else and loops.
    - These operations are useful in conditional execution of code and Boolean algebra.
*/
