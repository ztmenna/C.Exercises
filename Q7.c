
//  Chapter 7

#include <stdio.h>
#include <ctype.h>

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

void Q4() {
    printf("Enter phone number: ");
    char number = toupper(getchar());
    
    while (number != '\n') {
        
        if      (number == 'A' || number == 'B' || number == 'C') printf("2");
        else if (number == 'D' || number == 'E' || number == 'F') printf("3");
        else if (number == 'G' || number == 'H' || number == 'I') printf("4");
        else if (number == 'J' || number == 'K' || number == 'L') printf("5");
        else if (number == 'M' || number == 'N' || number == 'O') printf("6");
        else if (number == 'P' || number == 'R' || number == 'S') printf("7");
        else if (number == 'T' || number == 'U' || number == 'V') printf("8");
        else if (number == 'W' || number == 'X' || number == 'Y') printf("9");
        else
            printf("%c", number);
        
        number = toupper(getchar());
    }
    
    printf("\n");
}

void Q5() {
    int value = 0;
    printf("Enter a word: ");
    char character = toupper(getchar());
    
    while (character != '\n') {
        switch (character) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                value += 1;
                break;
            case 'D': case 'G':
                value += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                value += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                value += 4;
                break;
            case 'K':
                value += 5;
            case 'J': case 'X':
                value += 8;
                break;
            case 'Q': case 'Z':
                value += 10;
                break;
            default:
                break;
        }
        
        character = toupper(getchar());
    }
    
    printf("Scrabble value: %d\n", value);
}

void Q6() {
    printf("integer size: %lu\n", sizeof(int));
    printf("short size: %lu\n", sizeof(short));
    printf("long size: %lu\n", sizeof(long));
    printf("float size: %lu\n", sizeof(float));
    printf("double size: %lu\n", sizeof(double));
    printf("long double size: %lu\n", sizeof(long double));
}

int main() {
    Q6();
}