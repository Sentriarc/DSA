#include <stdio.h>

// Function to find the largest number in the array
int largeNumberFinder(int *arr, int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arraySizeInput;

    printf("Size of array (max 10): ");
    scanf("%d", &arraySizeInput);

    if (arraySizeInput > 10) {
        printf("The maximum size is 10.\n");
        return 0;
    }

    int arr[arraySizeInput]; // Declare the array with the given size

    for (int i = 0; i < arraySizeInput; i++) {
        printf("Array value [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("Array values: ");
    for (int i = 0; i < arraySizeInput; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find and print the largest number
    int largest = largeNumberFinder(arr, arraySizeInput);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
