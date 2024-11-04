#include <stdio.h>

void Increment(int *a) {
    *a = (*a) + 1;
}

int main() {
    int num = 5;
    Increment(&num);
    printf("After incrementing, the new number is %d\n", num);
}