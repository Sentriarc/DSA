#include <stdio.h>

void stringChanger(int* arr, int size, int targetValue) {
    for (int i = 0; i < size; i++) {
        *(arr + i) = targetValue;
    }
}

int main() {
    
}