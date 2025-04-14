/*
 * ===========================================================
 *                     Understanding Typecasting in C
 * ===========================================================
 *
 * Typecasting is a powerful feature in C that allows you to convert
 * a variable from one data type to another. This is particularly useful
 * when you need to perform operations that require different data types
 * or when you want to ensure that a variable is treated as a specific type.
 *
 * There are two main types of typecasting in C:
 * 
 * 1. Implicit Typecasting (Automatic Type Conversion):
 *    - This occurs when the compiler automatically converts one data type
 *      to another without explicit instruction from the programmer.
 *    - Example: When you assign an integer to a float variable, the integer
 *      is automatically converted to a float.
 *
 * 2. Explicit Typecasting (Manual Type Conversion):
 *    - This occurs when the programmer explicitly specifies the type conversion
 *      using a cast operator.
 *    - Example: Converting a float to an integer using (int).
 *
 * In this code, we will explore explicit typecasting through a simple example.
 */

 #include <stdio.h>

 int main() { 
     // Declare an integer variable 'n' and initialize it with the value 5
     int n = 5;
 
     // Declare a float variable 'm' and initialize it with the value 5.4
     float m = 5.4;
 
     // Explicitly convert the float 'm' to an integer and assign it to 'n'
     // The cast operator (int) is used to convert the float to an integer.
     // This conversion truncates the decimal part, resulting in 'n' being 5.
     n = (int) m; // Convert the data type to int
 
     // Print the value of 'n' after typecasting
     // Output: 5
     printf("%d \n", n);
 
     // Print the value of 'm'
     // Output: 5.4
     // Note: 'm' remains a float and retains its original value.
     printf("%f \n", m); // Corrected format specifier for float
 
     return 0; // End of the program
 }
 
 /*
  * ===========================================================
  *                     Key Takeaways
  * ===========================================================
  *
  * - Typecasting allows for the conversion of one data type to another,
  *   enabling flexibility in operations and data handling.
  * - Explicit typecasting is done using the cast operator, which can
  *   lead to data loss if not handled carefully (e.g., converting a float
  *   to an int truncates the decimal part).
  * - Implicit typecasting occurs automatically, but it is important to
  *   understand how it works to avoid unexpected results.
  * - Always be cautious when typecasting, especially when converting
  *   from a larger data type to a smaller one, as this can lead to data
  *   loss or overflow.
  *
  * ===========================================================
  */