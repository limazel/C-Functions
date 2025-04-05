#include <stdio.h>

int isNumberEven(int number) {
    if((number % 2) == 0) 
        return 1; // Even
    else 
        return 0; // Odd
}

int main() {
    int number;

    printf("Enter an number: ");
    scanf("%d", &number);

    if(isNumberEven(number)) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }

    return 0;
}