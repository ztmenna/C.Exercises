
//  Chapter 2

#include <stdio.h>

#define RADIUS 10
#define PI 3.1415f
#define FOUR_THIRD (4.0f / 3.0f)

int power(int x, int times) {
    int result = 1;
    for (int i = 0; i < times; i++) {
        result *= x;
    }
    
    return result;
}

void C2Q2() {
    float volume = FOUR_THIRD * PI * RADIUS * RADIUS * RADIUS;
    printf("Volume: %.3f\n", volume);
}

void C2Q3() {
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);
    float volume = FOUR_THIRD * PI * radius * radius * radius;
    printf("Volume: %.3f\n", volume);
}

void C2Q4() {
    float amount, tax = 0.05f;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    printf("With tax added: $%.2f\n", amount + (amount * tax));
}

void C2Q5() {
    int x;
    int result = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    result = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - power(x, 2) + (7 * x) - 6;
    printf("%d\n", result);
}

void C2Q6() {
    int x;
    int result = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    result = (((((3 * x) + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%d\n", result);
}

void C2Q7() {
    int amount, twenties, tens, fives, ones;
    printf("Enter amount: ");
    scanf("%d", &amount);
    twenties = amount / 20;
    amount = amount - (twenties * 20);
    tens = amount / 10;
    amount = amount - (tens * 10);
    fives = amount / 5;
    amount = amount - (fives * 5);
    ones = amount;
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
}

void C2Q8() {
    float amount, interest, payment;
    printf("Enter amount: ");
    scanf("%f", &amount);
    printf("Enter interest: ");
    scanf("%f", &interest);
    printf("Enter payment: ");
    scanf("%f", &payment);
    
    interest = (interest / 100.0f) / 12.0f;
    amount = (amount - payment) + (amount * interest);
    printf("Balance remaining after 1st payment: $%.2f\n", amount);
    amount = (amount - payment) + (amount * interest);
    printf("Balance remaining after 2nd payment: $%.2f\n", amount);
    amount = (amount - payment) + (amount * interest);
    printf("Balance remaining after 3rd payment: $%.2f\n", amount);
}

int main(void) {
    printf("Hello\n");
    return 0;
}