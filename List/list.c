#include <stdio.h>

int main() {
    // 1.) Sum of Elements

    // Array has 5 current numbers, with one extra slot
    int numbers[] = {1, 2, 3, 4, 5, 0};


    // Prompting for user input for sixth value in array
    int answer;
    printf("Type a number: \n");
    scanf("%d", &answer);
    // printf("The number you typed: %d", answer);


    // Appending user's choice into numbers array
    numbers[6] = answer; // <<<< there is something wrong here (i think)
    for (int i = 0; i < 6; i++) {
        printf("%d\n", numbers[i]);
    }


    // Adding up all numbers in array



    // Printing sum



    return 0;
}
