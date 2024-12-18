#include <stdio.h>

// Welcome to our facility, where we stack boxes for you! You also have the option to use some of ours!

int Stacking(int *box1, int *box2);

int main() {
    int userChoice1;
    int userChoice2;

    printf("How many boxes will you be bringing in?\n");
    scanf("%d", &userChoice1);

    printf("How many boxes will you need from our facility?\n");
    scanf("%d", &userChoice2);

    int allBoxes = Stacking(&userChoice1, &userChoice2);
    // int allBoxes = Stacking(&userChoice1, &userChoice2);
    printf("Here's how many boxes you will be stacking: %d\n", allBoxes);


    return 0;
}

int Stacking(int *box1, int *box2) {
    return (*box1) + (*box2);
}