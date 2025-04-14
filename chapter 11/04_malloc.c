#include <stdio.h>
#include <stdlib.h>  // Required for malloc and free

int main() {
    int *arr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Check if memory has been allocated successfully
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;  // Exit the program
    }

    // Assign values to the allocated memory
    printf("Enter %d integers:\n", n);
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
