#include <stdio.h>

void incrementByValue(int num) {
    num++;
}

void incrementByReference(int *num) {
    (*num)++;
}

int main() {
    int value = 5;
    
    printf("Initial value: %d\n", value);
    
    incrementByValue(value);
    printf("After pass by value: %d\n", value);
    
    incrementByReference(&value);
    printf("After pass by reference: %d\n", value);
    
    return 0;
}