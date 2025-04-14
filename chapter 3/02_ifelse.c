/*
 * ===========================================================
 *                     Understanding If-Else Statements in C
 * ===========================================================
 *
 * The `if-else` statement is a fundamental control structure in C
 * that allows for conditional execution of code blocks. It enables
 * the program to make decisions based on whether a specified condition
 * evaluates to true or false. This is essential for creating dynamic
 * and responsive programs that can handle various scenarios.
 *
 * The basic syntax of an `if-else` statement is as follows:
 *
 * if (condition) {
 *     // Code to execute if the condition is true
 * } else {
 *     // Code to execute if the condition is false
 * }
 *
 * In this code, we will explore the use of an `if-else` statement
 * to control the flow of execution based on the value of a variable.
 */

 #include <stdio.h>

 int main() {
     // Declare an integer variable 'age' and initialize it with the value 10
     int age = 10;
 
     // First conditional statement: Check if 'age' is greater than 10
     if (age > 10) {
         // This block will execute only if the condition is true
         printf("The age is greater than 10 \n");
     } else {
         // This block will execute if the condition is false
         printf("Your age is not greater than 10 \n");
     }
 
     return 0; // End of the program
 }
 
 /*
  * ===========================================================
  *                     Key Takeaways
  * ===========================================================
  *
  * - The `if-else` statement allows for branching in code execution,
  *   enabling different actions based on the evaluation of a condition.
  * - The `if` block executes when the condition is true, while the
  *   `else` block executes when the condition is false.
  * - This structure is useful for handling multiple scenarios and
  *   providing appropriate responses based on user input or variable values.
  *
  * Example of using multiple conditions with `else if`:
  *
  * if (age < 10) {
  *     printf("The age is less than 10 \n");
  * } else if (age == 10) {
  *     printf("The age is exactly 10 \n");
  * } else {
  *     printf("The age is greater than 10 \n");
  * }
  *
  * - The `if-else` structure can be nested to handle more complex
  *   decision-making processes, but care should be taken to maintain
  *   readability and avoid deep nesting.
  *
  * - Always ensure that the conditions are logically sound to avoid
  *   unexpected behavior in your program.
  *
  * ===========================================================
  */