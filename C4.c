
//  Chapter 4

#include <stdio.h>

void upc() {
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    int firstSum, secondSum, total;
    
    printf("Enter the first single digit: ");
    scanf("%1d", &d);
    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    
    firstSum = d + i2 + i4 + j1 + j3 + j5;
    secondSum = i1 + i3 + i5 + j2 + j4;
    total = (3 * firstSum) + secondSum - 1;
    
    printf("Check digit: %d\n", 9 - (total % 10));
}

void C4Q1() {
    int num;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    printf("The reversal is: %d%d \n", num % 10, num / 10);
}

void C4Q2() {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    printf("The reversal is: %d%d%d \n", number % 10, (number % 100) / 10, number / 100);
}

void C4Q3() {
    int left, mid, right;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &left, &mid, &right);
    printf("The reversal is: %d%d%d \n", right, mid, left);
}

void C4Q4() {
    int number, remainder, quotient, octal;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // TODO:
}

void C4Q5() {
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;
    int sumOne, sumTwo, total, remainder, checkDigit;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11);
    
    sumOne = d1 + d3 + d5 + d7 + d9 + d11;
    sumTwo = d2 + d4 + d6 + d8 + d10;
    printf("sumOne: %d, sumTwo: %d\n", sumOne, sumTwo);
    total = (3 * sumOne) + sumTwo - 1;
    printf("total: %d\n", total);
    remainder = total % 10;
    printf("remainder: %d\n", remainder);
    checkDigit = 9 - remainder;
    
    printf("Check digit: %d\n", checkDigit); // 01380015173, 05150024128, 03120001005
}

int main(void) {
    C4Q3();
    return 0;
}