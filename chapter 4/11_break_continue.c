/*
==========================================
            Break and Continue in C
==========================================

Topic Overview:
---------------
In C programming, `break` and `continue` are control flow statements used within loops and switch statements:

1. `break`: Used to immediately exit the loop or switch statement, skipping the remaining iterations.
2. `continue`: Used to skip the current iteration of the loop and proceed with the next iteration.

These statements are useful in cases where we need to control the flow of execution in a loop based on specific conditions.


==========================================
              Code Explanation
==========================================
*/

#include <stdio.h>

int main() {
    // The loop runs from 0 to 14 (total 15 iterations)
    for (int i = 0; i < 15; i++) {
        
        // Checking the condition if i is equal to 5
        if (i == 5) {
            /*
            Uncommenting 'break' will immediately terminate the loop when i == 5,
            meaning numbers from 5 to 14 will not be printed.
            */
            // break;  // Exits the loop when i == 5

            /*
            Uncommenting 'continue' will skip the iteration where i == 5,
            meaning 5 will not be printed, but the loop will continue running.
            */
            // continue;  // Skips the current iteration when i == 5
        }

        // Printing the value of i
        printf("i is %d\n", i);
    }

    // This statement will always execute after the loop completes
    printf("for loop is done\n");
    return 0;
}

/*
==========================================
              Detailed Explanation
==========================================

1. **Loop Execution:**
   - The loop runs from `i = 0` to `i = 14` (total 15 iterations).
   - At each iteration, `printf("i is %d\n", i);` prints the value of `i`.

2. **Break Statement:**
   - If `break;` is uncommented inside the `if (i == 5)`, the loop terminates immediately.
   - Output Example (if `break` is used):
     ```
     i is 0
     i is 1
     i is 2
     i is 3
     i is 4
     for loop is done
     ```
   - Here, the loop stops execution as soon as `i == 5`.

3. **Continue Statement:**
   - If `continue;` is uncommented inside the `if (i == 5)`, the current iteration is skipped.
   - Output Example (if `continue` is used):
     ```
     i is 0
     i is 1
     i is 2
     i is 3
     i is 4
     i is 6
     i is 7
     ...
     ```
   - Notice that `i = 5` is missing in the output because `continue;` skipped that iteration.

==========================================
           Real-World Example
==========================================
1. **Break Usage:**
   - Imagine searching for a specific item in a list. If found, there's no need to continue searching.
   ```c
   for (int i = 0; i < 10; i++) {
       if (arr[i] == target) {
           printf("Element found at index %d", i);
           break; // Stop searching once found
       }
   }
   ```

2. **Continue Usage:**
   - Imagine processing numbers, but skipping negative numbers.
   ```c
   for (int i = 0; i < 10; i++) {
       if (arr[i] < 0) {
           continue; // Skip negative numbers
       }
       printf("Processing: %d\n", arr[i]);
   }
   ```

==========================================
             Summary
==========================================
- `break` exits the loop completely when a condition is met.
- `continue` skips the current iteration and moves to the next one.
- These are useful for efficient control of loop execution.
*/