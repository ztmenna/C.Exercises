
//  Chapter 7

#include <stdio.h>

void stringLength() {
    printf("Enter a message: ");
    char letter = getchar();
    int counter = 0;
    
    while (letter != '\n') {
        letter = getchar();
        counter++;
    }
    
    printf("The message is %d characters long.\n", counter);
}

void stringLengthV2() {
    int counter = 0;
    printf("Enter a message: ");
    
    while (getchar() != '\n')
        counter++;
    
    printf("The message is %d characters long.\n", counter);
}

void Q1() {
    // TODO:
    // Modify:
    int i = 1, odd = 3, square, entries;
    printf("This function prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &entries);
    
    for (square = 1; i <= entries; odd +=2) {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }
}

void Q3() {
    double number, sum = 0;
    printf("Enter a series of double values: ");
    scanf("%lf", &number);
    
    while (number != 0) {
        sum += number;
        scanf("%lf", &number);
    }
    
    printf("The sum is: %lf\n", sum);
}

int main() {
    Q3();
}