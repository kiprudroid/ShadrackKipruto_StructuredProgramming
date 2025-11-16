#include <stdio.h>

int main(void){
    
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    // Subtract 1 to ignore the newline character
    length--;

    printf("The length of the string is: %d\n", length);
    return 0;
}