/*
----------------------------------------------------
            POINTERS TO POINTERS IN C
----------------------------------------------------

- A pointer is a variable that stores the address of another variable.
- A pointer to a pointer is a variable that stores the address of another pointer.
- This allows multiple levels of indirection and is useful in dynamic memory allocation,
  passing arrays, and handling complex data structures.

----------------------------------------------------
            EXAMPLE OF POINTERS TO POINTERS
----------------------------------------------------
*/

#include <stdio.h>  // Standard input-output library

int main() {
    int i = 6;      // Declaring an integer variable and assigning it a value
    int* j = &i;    // Pointer j stores the address of i
    int** k = &j;   // Pointer to pointer k stores the address of j

    // Printing values using different levels of indirection
    printf("The value of i is %d \n", i);       // Directly accessing i
    printf("The value of i is %d \n", *j);      // Accessing i using pointer j
    printf("The value of i is %d \n", *(&i));   // Accessing i using address-of operator
    printf("The value of i is %d \n", **k);     // Accessing i using pointer to pointer k
    
    return 0;  // Indicating successful execution
}

/*
----------------------------------------------------
        DETAILED EXPLANATION OF THE CODE
----------------------------------------------------
1. We start by declaring an integer variable i and assign it a value of 6.
2. We declare a pointer j that stores the address of i (j = &i).
3. We declare another pointer k that stores the address of j (k = &j).
4. We print the value of i using multiple ways:
   - Directly using i.
   - Using pointer j (*j gives the value stored at address j, which is i).
   - Using the address-of operator *(&i) (which also gives the value of i).
   - Using double indirection **k (first *k gives j, then **k gives i).

----------------------------------------------------
        KEY POINTS ABOUT POINTERS TO POINTERS
----------------------------------------------------
- **Single Pointer (int *p)**: Stores the address of an integer variable.
- **Pointer to Pointer (int **q)**: Stores the address of another pointer.
- **Accessing values using pointer to pointer**:
  - *p gives the value of the integer.
  - **q gives the value stored in the integer (by dereferencing twice).
- Used in advanced programming, dynamic memory allocation, and handling multidimensional arrays.

----------------------------------------------------
        EXAMPLE TO UNDERSTAND THE CONCEPT
----------------------------------------------------
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;      // Pointer storing the address of num
    int **ptr2 = &ptr;    // Pointer to pointer storing the address of ptr

    printf("Value of num: %d\n", num);
    printf("Value of num using ptr: %d\n", *ptr);
    printf("Value of num using ptr2: %d\n", **ptr2);
    
    return 0;
}
*/
