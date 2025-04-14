/*
 * ===========================================================
 *                     Understanding Conditionals in C
 * ===========================================================
 *
 * Conditionals are a fundamental concept in programming that allow
 * the execution of certain blocks of code based on specific conditions.
 * In C, the most common conditional statements are `if`, `else if`, and `else`.
 * These statements enable the program to make decisions and execute different
 * paths of code depending on the evaluation of boolean expressions.
 *
 * In this code, we will explore the use of `if` statements to control
 * the flow of execution based on the value of a variable.
 */

 #include <stdio.h>

 int main() {
     // Declare an integer variable 'age' and initialize it with the value 5
     int age = 5;
 
     // First conditional statement: Check if 'age' is greater than 5
     if (age > 5) {
         // This block will execute only if the condition is true
         printf("The age is greater than 5 \n");
     }
 
     // Second conditional statement: Check if 'age' is divisible by 5
     if (age % 5 == 0) {
         // This block will execute only if the condition is true
         printf("We are inside another if \n");
         printf("Your age is divisible by 5 \n");
     }
 
     // Note: The second condition checks for divisibility by 5, not 50.
     // If 'age' is 5, the condition will be true, and the corresponding
     // block will execute.
 
     return 0; // End of the program
 }
 
 /*
  * ===========================================================
  *                     Key Takeaways
  * ===========================================================
  *
  * - Conditionals allow for decision-making in programs, enabling
  *   different code paths based on variable values or conditions.
  * - The `if` statement evaluates a boolean expression; if the expression
  *   is true, the code block within the `if` statement is executed.
  * - The `else if` and `else` statements can be used to provide additional
  *   conditions and a default action if none of the previous conditions are met.
  * - The logical operators (e.g., `&&`, `||`, `!`) can be used to combine
  *   multiple conditions for more complex decision-making.
  *
  * Example of using `else if` and `else`:
  * 
  * if (age < 5) {
  *     printf("The age is less than 5 \n");
  * } else if (age == 5) {
  *     printf("The age is exactly 5 \n");
  * } else {
  *     printf("The age is greater than 5 \n");
  * }
  *
  * - Always ensure that the conditions are correctly defined to avoid
  *   unexpected behavior in your program.
  *
  * ===========================================================
  */