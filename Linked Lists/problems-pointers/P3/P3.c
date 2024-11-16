#include <stdio.h>
#include <ctype.h>

// THIS FUNCTION NEEDS TO BE CHANGED (size does not belong here)
void stringChanger(int* arr, int targetValue) {
    for (int i = 0; i < 5; i++) {
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


// I HAVE NO IDEA WHAT I WAS DOING HERE...MAYBE I WAS READING THE WRONG INSTRUCTIONS? IDK!