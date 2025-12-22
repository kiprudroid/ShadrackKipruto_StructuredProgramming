#include <stdio.h>

void swapNumbers(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5;
    int b = 10;
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    swapNumbers(&a, &b);
    
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}