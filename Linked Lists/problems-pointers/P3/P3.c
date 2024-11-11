#include <stdio.h>
#include <ctype.h>

void stringChanger(int* arr, int size, int targetValue) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = targetValue;
    }
}

int main() {
    int targetValue;
    char string[100];

    // Asking for user input
    printf("Say something! (Preferably a string): ");
    scanf("%s\n", string);
    // printf("%s", toupper(char string));
    for (int i = 0; i < sizeof(string), i++;) { // does not work
        printf("this works");
    };
}