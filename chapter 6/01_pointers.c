/*
==========================================
               Pointers in C
==========================================

Topic Overview:
---------------
Pointers are variables that store the memory address of another variable.
They are used for dynamic memory allocation, efficient array manipulation,
and function argument passing.

==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

int main(){ 
    int a = 56;  // Declaring an integer variable a and assigning it the value 56
    
    int* j = &a; // Pointer j is assigned the address of variable a
    
    // Printing the memory address of variable a
    printf("The address of a is %p \n", &a);  // %p format specifier prints address in hexadecimal
    printf("The address of a is %p \n", j);   // Since j stores &a, it also prints the address of a
    printf("The address of a is %u \n", &a);  // %u prints address as an unsigned integer
    
    // Accessing the value stored at address j using dereferencing
    printf("The value at address j is %d \n", *j);  // Dereferencing j gives the value of a
    printf("The value of address j is %d \n", *(&a)); // Another way to access value using &a
    
    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Pointer Basics:**
   - `int* j = &a;` declares `j` as a pointer to an integer and stores the address of `a`.
   - `&a` gives the memory address of `a`.
   - `*j` (dereferencing j) retrieves the value stored at the address in j (which is `a`).

2. **Printing Memory Address:**
   - `%p` format specifier prints memory addresses in hexadecimal.
   - `%u` prints memory addresses as unsigned integers (not recommended for portability).

3. **Dereferencing a Pointer:**
   - `*j` gives the value stored at the address j points to, i.e., `a`.
   - `*(&a)` gives the value of `a` because `&a` is the address of `a`, and `*` fetches its value.

==========================================
           Real-World Example
==========================================

1. **Swapping Two Variables using Pointers:**
   ```c
   void swap(int *x, int *y) {
       int temp = *x;
       *x = *y;
       *y = temp;
   }
   int main() {
       int a = 5, b = 10;
       swap(&a, &b);
       printf("a = %d, b = %d", a, b);
       return 0;
   }
   ```
   - This function swaps values by passing pointers, avoiding unnecessary copies.

2. **Dynamic Memory Allocation:**
   ```c
   int *ptr = (int*) malloc(sizeof(int));
   *ptr = 42;
   printf("Value: %d", *ptr);
   free(ptr); // Freeing allocated memory
   ```
   - Pointers allow dynamic allocation using `malloc()`.

==========================================
             Summary
==========================================
- Pointers store memory addresses of variables.
- `*` (dereferencing) accesses the value at a memory address.
- `&` gives the address of a variable.
- Pointers are essential for memory management and efficient data manipulation.
*/
