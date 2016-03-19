
//  Chapter 6

#include <stdio.h>

void sum() {
    int total, number = 0;
    printf("Enter a series of numbers (0 to terminate): ");
    
    scanf("%d", &number);
    
    while (number != 0) {
        total += number;
        scanf("%d", &number);
    }
    
    printf("The sum is: %d\n", total);
}

void numOfDigits() {
    int digits = 0, num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    do {
        num /= 10;
        digits++;
    } while (num > 0);
    
    printf("The number has %d digits.\n", digits);
}

int main() {
    numOfDigits();
    return 0;
}