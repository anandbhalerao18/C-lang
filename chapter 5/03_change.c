/*
==========================================
            Pass by Value in C
==========================================

Topic Overview:
---------------
In C programming, function arguments are passed **by value** by default. This means that a function receives a **copy** of the argument, not the actual variable itself.

Key points about pass by value:
- Changes made inside the function **do not affect** the original variable in `main()`.
- Each function call creates a **separate copy** of the variable.
- Useful when we need to **protect the original data** from modifications.


==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

// Function prototype (declaration)
int change(int a);

// Function definition
int change(int a) {
    a = 77; // Changes the local copy of 'a'
    printf("Inside change() function, a is %d\n", a);
    return 0;
}

int main() { 
    int b = 22; // Original value of 'b'
    
    // Function call: 'b' is passed by value (a copy is sent)
    change(b); // The function modifies only the copy, not the original variable
    
    // Printing the original value of 'b' after function call
    printf("Inside main() function, b is %d\n", b);

    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Function Call Behavior:**
   - When `change(b)` is called, `b` is passed **by value** to the function.
   - Inside `change()`, a **copy** of `b` is created and modified (`a = 77`).
   - The original variable `b` remains **unchanged** in `main()`.

2. **Why is `b` Not Changed?**
   - Since C uses **pass by value**, the function operates on a **copy** of `b`.
   - The original variable `b` in `main()` remains unaffected by changes inside `change()`.
   
3. **Corrected Issues:**
   - Removed redundant function declaration (`int change(int a);` was already defined).
   - Improved formatting for better readability.

==========================================
           Real-World Example
==========================================
1. **Safe Function Execution:**
   - When we don’t want a function to modify the original data, pass by value is useful.
   ```c
   int square(int x) {
       x = x * x; // This modifies only the copy of x
       return x;
   }
   int main() {
       int num = 5;
       int result = square(num);
       printf("num is still %d, but result is %d", num, result);
   }
   ```

2. **Avoiding Unintentional Changes:**
   - Protects variables from being altered by functions unintentionally.

==========================================
             Summary
==========================================
- In **pass by value**, the function operates on a **copy** of the variable.
- The original variable remains **unchanged** after the function call.
- This method is used when we don’t want functions to modify the original data.
*/
