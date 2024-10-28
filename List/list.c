#include <stdio.h>
#include <limits.h>

int main() {
    // ---------------------
    // 1.) Sum of Elements |
    // ---------------------

    printf("1.) Sum of Elements\n");
    // Array has 5 current numbers, with one extra slot
    int numbers[] = {1, 2, 3, 4, 5, 0};


    // Prompting for user input for sixth value in array
    int answer;
    printf("Type a number: \n");
    scanf("%d", &answer);
    // printf("The number you typed: %d", answer);


    // Appending user's choice into numbers array
    numbers[5] = answer;
    // for (int i = 0; i < 6; i++) {
    //     printf("%d\n", numbers[i]);
    // }


    // Adding up all numbers in array
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum = sum + numbers[i];
    }


    // Printing sum
    printf("%d\n\n", sum);










    // ----------------------------
    // 2.) Find Maximum & Minimum |
    // ----------------------------
    printf("2.) Find Maximum & Minimum\n");


    // Declaring list (array)
    int numbers2[] = {2, 1, 5, 3, 4, 0}; // Purposely placed out of order so I don't make it easy for myself


    // Takes user's input
    int answer2;
    printf("Type a number between 0-11: \n");
    scanf("%d", &answer2);


    // Makes sure that the input is between 0-11
    while (answer2 > 10 || answer2 < 1) {
        printf("Invalid. Please choose a number between 0-11:\n");
        scanf("%d", &answer2);      
    }


    // Appending user's input into value of 0 in array
    numbers2[5] = answer2;


    // Finds minimum value in list
    if (numbers2[0] < 2 || numbers2[1] < 2 || numbers2[2] < 2 || numbers2[3] < 2 || numbers2[4] < 2 || numbers2[5] < 2) {
        printf("This is the minimum value."); // Not sure how to select the particular number within the array just yet.
    }

    // Finds maximum value in list
    if (numbers2[0] < 9 || numbers2[1] < 9 || numbers2[2] < 9 || numbers2[3] < 9 || numbers2[4] < 9 || numbers2[5] < 9) {
        printf("This is the maximum value."); // Not sure how to select the particular number within the array just yet.
    }
    else {
        printf("Please try again.");
    }

    // Outputs both minimum and maximum values
    printf("The maximum value is ___ and the minimum value is 1.");



    return 0;
}
