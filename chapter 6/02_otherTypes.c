/*
==========================================
               Pointers in C
==========================================

Topic Overview:
---------------
A **pointer** in C is a variable that stores the memory address of another variable.
Pointers allow efficient memory manipulation, making them crucial in low-level programming and system architecture.

Types of Pointers Covered in This Code:
1. **Character Pointer (`char*`)** - Stores the address of a character variable.
2. **Float Pointer (`float*`)** - Stores the address of a float variable.

==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

int main(){ 
    // Declaring a character variable
    char a = 'A';
    
    // Creating a character pointer and storing the address of 'a'
    char* j = &a; // j is a pointer pointing to 'a' and it is a character pointer
    
    // Printing the memory address of 'a'
    printf("The address of a is %p \n", &a);
    printf("The address of a is %p \n", j);
    printf("The address of a is %u \n", (unsigned int)&a);

    // Declaring a float variable
    float k = 7.994;
    
    // Creating a float pointer and storing the address of 'k'
    float* k1 = &k;

    // Printing the value stored at the address of 'a'
    printf("The value at address j is %c \n", *j);
    printf("The value of address j is %c \n", *(&a));
    
    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Character Pointer (`char*`)**:
   - A pointer `j` is created to store the address of `char a`.
   - Using `%p`, we print the memory address of `a`.
   - Using `%c`, we print the value stored at the memory address of `a`.

2. **Float Pointer (`float*`)**:
   - A pointer `k1` is created to store the address of `float k`.
   - The pointer `k1` allows us to access and manipulate `k` through its memory address.

==========================================
           Real-World Example
==========================================
1. **Using Pointers for Efficient Memory Access:**
   ```c
   int x = 10;
   int* ptr = &x;
   printf("Value of x: %d\n", *ptr);  // Accessing x using pointer
   ```

2. **Pointers in Function Arguments:**
   ```c
   void changeValue(int* ptr) {
       *ptr = 100;
   }
   int main() {
       int num = 50;
       changeValue(&num);
       printf("Updated value: %d\n", num);  // num is now 100
   }
   ```

==========================================
             Summary
==========================================
- **Pointers store memory addresses of variables.**
- **Character pointers (`char*`) store addresses of character variables.**
- **Float pointers (`float*`) store addresses of float variables.**
- **Pointers help in efficient memory management and function parameter passing.**
*/
