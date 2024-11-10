#include <stdio.h>

int Switch(int* num1, int* num2);

int main() {
    printf("1.) Swapping Two Numbers With Pointers\n");

    int num1;
    int num2; 

    printf("Type a number: \n");
    scanf("%d", &num1);
    printf("You chose: %d\n\n", num1);

    printf("Type another number: \n");
    scanf("%d", &num2);
    printf("You chose: %d\n\n", num2);

    int switchFunction = Switch(num1, num2);

    return 0;
}

int Switch(int* num1, int* num2) {
    int choice1;
    int choice2;

    return num1 = &choice2;
    return num2 = &choice1;

}