#include <stdio.h>
#include <ctype.h>

int largeNumberFinder(int* largeNumber);

int main() {
    int arraySizeInput;
    int arrayValue;
    int* arr[arraySizeInput]; // The pointer here may be causing issues for the stuff below

    printf("size of array: ");
    scanf("%d", &arraySizeInput);

    if (arraySizeInput > 10) {
        printf("The maximum size is 10.\n");
        return 0;
    }

    for (int i = 0; i < arraySizeInput; i++) {
        printf("array value: ");
        scanf("%d", &arrayValue);
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size of current array: %d\n", size); // This is currently incorrect syntax
    

    /* Plan for next time: 
    - find a way to display the array (not the size of it) 
    - based on the values within the array, link the pointer to the set of numbers 
    - write a function that finds the largest number within the array
    */ 
}

int largeNumberFinder(int* largeNumber) {
    // largeNumber = 
}
