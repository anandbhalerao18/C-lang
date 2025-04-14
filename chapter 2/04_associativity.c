/*
 * ===========================================================
 *                     Understanding Associativity in C
 * ===========================================================
 *
 * Associativity is a fundamental concept in programming languages, including C,
 * that defines the order in which operators of the same precedence are evaluated
 * in an expression. This is crucial for understanding how complex expressions
 * are computed and can significantly affect the outcome of calculations.
 *
 * In C, operators can be left associative or right associative:
 * 
 * 1. Left Associative: Operators are evaluated from left to right.
 *    Example: The subtraction operator (-) is left associative.
 *    Expression: 10 - 5 - 2 is evaluated as (10 - 5) - 2.
 *
 * 2. Right Associative: Operators are evaluated from right to left.
 *    Example: The assignment operator (=) is right associative.
 *    Expression: a = b = 5 is evaluated as a = (b = 5).
 *
 * In this code, we will explore the associativity of arithmetic operators
 * through a simple example.
 */

 #include <stdio.h>

 int main() { 
     // Declare and initialize three integer variables
     int a = 3; // a is assigned the value 3
     int b = 6; // b is assigned the value 6
     int c = 9; // c is assigned the value 9
 
     // Calculate the expression a*b/c + 7
     // Here, we will evaluate the expression step by step.
     // The expression is: a * b / c + 7
     // Step 1: Evaluate a * b
     //         3 * 6 = 18
     // Step 2: Evaluate 18 / c
     //         18 / 9 = 2
     // Step 3: Finally, add 7
     //         2 + 7 = 9
     printf("The value of %d \n", a * b / c + 7); // Output: 9
 
     // Calculate the expression 3*b/2*c + 7*a
     // Here, we will evaluate the expression step by step.
     // The expression is: 3 * b / 2 * c + 7 * a
     // Step 1: Evaluate 3 * b
     //         3 * 6 = 18
     // Step 2: Evaluate 18 / 2
     //         18 / 2 = 9
     // Step 3: Evaluate 9 * c
     //         9 * 9 = 81
     // Step 4: Evaluate 7 * a
     //         7 * 3 = 21
     // Step 5: Finally, add the results of Step 3 and Step 4
     //         81 + 21 = 102
     printf("The value of %d \n", 3 * b / 2 * c + 7 * a); // Output: 102
 
     return 0; // End of the program
 }
 
 /*
  * ===========================================================
  *                     Key Takeaways
  * ===========================================================
  *
  * - Associativity determines the order of evaluation for operators
  *   of the same precedence.
  * - In the given examples, we see how the left-to-right evaluation
  *   of multiplication (*) and division (/) affects the final result.
  * - Understanding associativity is crucial for writing correct
  *   and predictable expressions in C.
  * - Always be mindful of operator precedence and associativity
  *   when constructing complex expressions to avoid unexpected results.
  *
  * ===========================================================
  */