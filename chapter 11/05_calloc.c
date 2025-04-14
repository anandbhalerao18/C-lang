#include <stdio.h>
#include <stdlib.h>  // Required for calloc and free

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;  // Exit the program
    }

    // calloc initializes all memory blocks to 0
    printf("Initial values in the array (should be 0):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Take input from the user
    printf("\n\nEnter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the entered values
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
