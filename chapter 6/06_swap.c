/*
----------------------------------------------------
                    SWAPPING IN C
----------------------------------------------------

- Swapping is the process of exchanging the values of two variables.
- In C, swapping can be done using:
  1. Call by Value (incorrect approach for swapping)
  2. Call by Reference (correct approach using pointers)
- In Call by Reference, we pass the memory addresses of variables to modify their actual values.

----------------------------------------------------
                 INCORRECT SWAP FUNCTION
----------------------------------------------------
*/

#include <stdio.h>  // Standard input-output library

// Incorrect swap function - It does not swap values correctly
void swap(int* a, int* b) {
    int temp;
    temp = *a;  // Store the value of *a in temp
    *a = *b;    // Assign the value of *b to *a
    *b = temp;  // Assign temp (old *a) to *b
}

int main() {
    int a = 5, b = 7;  // Declaring two integer variables
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);  // Calling swap function by passing addresses
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;  // Indicating successful execution
}

/*
----------------------------------------------------
        DETAILED EXPLANATION OF THE CODE
----------------------------------------------------
1. We include <stdio.h> for input and output functions.
2. We declare a function swap(int*, int*), which takes two integer pointers as parameters.
3. Inside the function:
   - We use a temporary variable to store the value at *a.
   - We assign *b's value to *a.
   - We assign temp's value (old *a) to *b.
4. In main():
   - We declare two integers, a = 5 and b = 7.
   - We print their initial values.
   - We call swap(&a, &b), passing the addresses of a and b.
   - After swapping, we print the new values of a and b.

----------------------------------------------------
            KEY POINTS ABOUT SWAPPING
----------------------------------------------------
- Using Call by Value does not swap values permanently.
- Using Call by Reference modifies values permanently.
- Useful in sorting algorithms and low-level programming.

----------------------------------------------------
        ADDITIONAL EXAMPLE - SWAP WITHOUT POINTERS
----------------------------------------------------
#include <stdio.h>
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;
    swap(x, y);
    printf("x = %d, y = %d\n", x, y); // Values remain unchanged
    return 0;
}
*/