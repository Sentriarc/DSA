#include <stdio.h>
#include <ctype.h>

int largeNumberFinder(int* largeNumber);

int main() {
    int arraySizeInput;
    int arrayValue;
    int arr[arraySizeInput];

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

    
}

int largeNumberFinder(int* largeNumber) {
    // largeNumber = 
}
