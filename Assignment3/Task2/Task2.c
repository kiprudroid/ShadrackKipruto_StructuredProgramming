#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;
    
    ptr = &num;
    
    printf("Value of num: %d\n", num);
    printf("Value stored in ptr: %p\n", (void*)ptr);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value accessed using *ptr (dereferenced): %d\n", *ptr);
    
    return 0;
}