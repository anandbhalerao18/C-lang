/*
 * ===========================================================
 *                     Understanding Non-Zero Values in C
 * ===========================================================
 *
 * In C, the concept of non-zero values is crucial for understanding
 * how conditions are evaluated in control structures such as `if` statements.
 * In C, any non-zero value is considered true, while zero is considered false.
 * This behavior allows for a flexible way to control the flow of a program
 * based on the evaluation of expressions.
 *
 * The following code demonstrates how various types of non-zero values
 * are treated in conditional statements.
 */

 #include <stdio.h>

 int main() {
     // First conditional statement: Evaluates to true (1 is non-zero)
     if (1) {
         // This block will execute because the condition is true
         printf("This is the first line \n");
     }
 
     // Second conditional statement: Evaluates to true (45 is non-zero)
     if (45) {
         // This block will execute because the condition is true
         printf("This is the second line \n");
     }
 
     // Third conditional statement: Evaluates to true (45.87 is non-zero)
     if (45.87) {
         // This block will execute because the condition is true
         printf("This is the third line \n");
     }
 
     // Fourth conditional statement: Evaluates to true (non-empty string is non-zero)
     if ("c") {
         // This block will execute because the condition is true
         printf("This is the character line \n");
     }
 
     // Fifth conditional statement: Evaluates to false (0 is zero)
     if (0) {
         // This block will NOT execute because the condition is false
         printf("This is zero, this can't be executed");
     }
 
     return 0; // End of the program
 }
 
 /*
  * ===========================================================
  *                     Key Takeaways
  * ===========================================================
  *
  * - In C, any non-zero value is treated as true in conditional statements,
  *   while zero is treated as false. This applies to integers, floating-point
  *   numbers, and even strings.
  *
  * - The `if` statement evaluates the condition inside the parentheses:
  *   - If the condition is non-zero (true), the code block inside the `if`
  *     statement executes.
  *   - If the condition is zero (false), the code block does not execute.
  *
  * - Examples of non-zero values:
  *   - Integers: 1, 45, -10 (all non-zero integers are true)
  *   - Floating-point numbers: 45.87, -0.1 (all non-zero floats are true)
  *   - Strings: Any non-empty string (e.g., "c", "hello") is considered true.
  *
  * - Example of a zero value:
  *   - The integer 0 is considered false, so any condition that evaluates to 0
  *     will not execute the corresponding code block.
  *
  * - Understanding how non-zero values are treated in C is essential for
  *   writing effective conditional statements and controlling program flow.
  *
  * ===========================================================
  */