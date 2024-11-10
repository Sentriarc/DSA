#include <stdio.h>

// int Modifier(int* ptr, int arr[]);
int Modifier();

int main() {
    printf("2.) Simple Array Manipulation with Pointers\n\n");
    int arr[] = {1, 2, 3, 4, 5};
    // int input;

    // printf("Type a number: ");
    // scanf("%d\n", &input);
    Modifier(arr);

}

// int Modifier(int* ptr, int arr[]) {
//     int value;

//     printf("Type a number: ");
//     int* ptr = scanf("%d\n", &value);
// }

int Modifier(int* arr[]) {
    int input;

    printf("Type a number:" );
    scanf("%d\n", &input);

    arr[] = 
}