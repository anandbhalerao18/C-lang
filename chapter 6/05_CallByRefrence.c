/*
----------------------------------------------------
            CALL BY REFERENCE IN C
----------------------------------------------------

- Call by Reference is a parameter-passing mechanism where the address of variables is passed to a function.
- This allows the function to directly modify the original variable values.
- Changes made inside the function affect the original variables outside the function.
- This method is useful when we need to modify variables inside a function.

----------------------------------------------------
            EXAMPLE OF CALL BY REFERENCE
----------------------------------------------------
*/

#include <stdio.h>  // Standard input-output library

// Function prototype - sum function accepts two integer pointers
int sum(int*, int*);

// Function definition
// The function modifies the value of x (by changing *a) and returns the sum of *a and *b
int sum(int* a, int* b) {
    *a = 6;  // Modifying the value stored at address a
    return *a + *b;  // Returning the sum of the modified *a and *b
}

int main() {
    int x = 19, y = 6;  // Declaring two integer variables
    
    // Calling the function and passing addresses of x and y
    printf("The sum of x and y is %d \n", sum(&x, &y));
    
    // Checking the modified value of x
    printf("The new value of x is %d \n", x);
    
    return 0;  // Indicating successful execution
}

/*
----------------------------------------------------
        DETAILED EXPLANATION OF THE CODE
----------------------------------------------------
1. We include <stdio.h> for input and output functions.
2. We declare a function prototype int sum(int*, int*), indicating that the function takes two integer pointers.
3. The sum function:
   - Takes two integer pointers (a and b).
   - Modifies the value of *a (which affects x in main()).
   - Returns the sum of *a and *b.
4. In main():
   - We declare two integers, x = 19 and y = 6.
   - We call sum(&x, &y), passing the addresses of x and y.
   - The function modifies x to 6 and returns the sum 6 + 6 = 12.
   - We print the modified value of x to confirm the change.

----------------------------------------------------
        KEY POINTS ABOUT CALL BY REFERENCE
----------------------------------------------------
- Unlike Call by Value, Call by Reference passes memory addresses, allowing direct modification of variables.
- This is useful for:
  - Modifying values inside a function.
  - Reducing memory usage when passing large data structures.
  - Dynamic memory allocation.

----------------------------------------------------
        EXAMPLE TO UNDERSTAND THE CONCEPT
----------------------------------------------------
#include <stdio.h>

void modify(int *p) {
    *p = 100;  // Changing the value stored at address p
}

int main() {
    int num = 10;
    printf("Before function call: %d\n", num);
    modify(&num);  // Passing address of num
    printf("After function call: %d\n", num); // Value of num is changed
    return 0;
}
*/