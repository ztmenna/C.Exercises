
//  Chapter 6

#include <stdio.h>
#include <stdbool.h>

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

void forLoopTest() {
    int n;
    
    for (;;) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d cubed is %d.\n", n, n * n * n);
    }
}

int account() {
    int command;
    float credit, debit, balance = 0.0f;
    
    printf("**** Checking Account ****\n");
    printf("Commands: 0 = Clear, 1 = Credit, 2 = Debit, 3 = Balance, 4 = Exit\n");
    
    for (;;) { // while (true)
        printf("Enter command: ");
        scanf("%d", &command);
        
        switch (command) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter credit amount: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter debit amount: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance: %.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0 = Clear, 1 = Credit, 2 = Debit, 3 = Balance, 4 = Exit\n");
                break;
        }
    }
    
}

void Q1() {
    float number, largest = 0;
    
    for (;;) {
        printf("Enter a number: ");
        scanf("%f", &number);
        
        if (number <= 0)
            break;
        else {
            if (number > largest)
                largest = number;
        }
    }
    
    printf("The largest number entered was: %.2f\n", largest);
}

void Q2() {
    int x, y, r;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    
    printf("GCD: %d\n", x);
}

int getGCD(int x, int y) {
    int r;
    
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    
    return x;
}

void Q3() {
    int gcd, num, denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    
    gcd = getGCD(num, denom);
    
    printf("In lowest terms: %d/%d\n", num / gcd, denom / gcd);
}

void Q5() {
    int number;
    printf("Enter a number to reverse: ");
    scanf("%d", &number);
    
    do {
        printf("%d", number % 10);
        number /= 10;
    } while (number > 0);

    printf("\n");
}

void Q6() {
    int number, square = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // TODO:
    
}

int main() {
    Q6();
    return 0;
}