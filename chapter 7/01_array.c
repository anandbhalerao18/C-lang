/*
----------------------------------------------------
                   ARRAYS IN C
----------------------------------------------------

- An array is a collection of elements of the same data type stored in contiguous memory locations.
- It allows easy access to multiple values using a single variable name and an index.
- In C, arrays start from index 0, meaning the first element is at position 0.
- Arrays are useful for handling large amounts of data efficiently.

----------------------------------------------------
                 EXAMPLE: ARRAY BASICS
----------------------------------------------------
*/

#include <stdio.h>  // Standard input-output library

int main() {
    // Declaring an array of size 90 (can store 90 integer values)
    int marks[90]; 
    
    // Initializing some values in the array
    marks[0] = 55;  // Assigning 55 to index 0
    marks[1] = 89;  // Assigning 89 to index 1
    
    // Printing the stored values
    printf("Marks at index 0: %d\n", marks[0]);
    printf("Marks at index 1: %d\n", marks[1]);
    
    return 0;  // Indicating successful execution
}

/*
----------------------------------------------------
        DETAILED EXPLANATION OF THE CODE
----------------------------------------------------
1. We include <stdio.h> for input and output operations.
2. We declare an integer array marks[90] that can hold 90 integer values.
3. We assign values:
   - marks[0] = 55 (stores 55 at the first index)
   - marks[1] = 89 (stores 89 at the second index)
4. We print the values using printf().
5. The program executes successfully and outputs the stored values.

----------------------------------------------------
           KEY POINTS ABOUT ARRAYS
----------------------------------------------------
- Arrays store multiple elements of the same data type.
- Indexing starts from 0 in C.
- The size of the array determines the number of elements it can hold.
- Array elements are stored in contiguous memory locations.
- Accessing elements using an index makes retrieval efficient.

----------------------------------------------------
        EXAMPLE: INITIALIZING AND PRINTING AN ARRAY
----------------------------------------------------
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Declaring and initializing an array
    
    // Looping through array to print all elements
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }
    
    return 0;
}
*/
