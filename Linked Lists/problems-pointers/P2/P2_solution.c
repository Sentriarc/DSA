#include <stdio.h>

// Function to modify each element in the array by adding targetValue
void modifyArray(int *arr, int size, int targetValue) {
    for (int i = 0; i < size; i++) {
        *(arr + i) += targetValue;  // Adds targetValue to each element
    }
}

int main() {
    int size, targetValue;

    // Get the array size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare the array with user-defined size

    // Get elements of the array from the user
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the target value from the user
    printf("Enter the value to add to each element: ");
    scanf("%d", &targetValue);

    // Print array before modification
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Call the function to modify the array
    modifyArray(arr, size, targetValue);

    // Print array after modification
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
