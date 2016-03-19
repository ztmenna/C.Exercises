
// Chapter 5

#include <stdio.h>

void C5Q1() {
    int number, digits = 0;
    printf("Enter a 4 digit number: ");
    scanf("%d", &number);
    
    if (number < 9) {
        digits = 1;
    } else if (number < 100) {
        digits = 2;
    } else if (number < 1000) {
        digits = 3;
    } else {
        digits = 4;
    }
    
    printf("The number %d has %d digits.\n", number, digits);
}

void C5Q2() {
    int hour, minute, hourX, minuteX;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    if (hour == 0 && minute <= 59) {
        hourX = 12;
        minuteX = minute;
    } else if (hour >= 1 && hour <= 11) {
        hourX = hour;
        minuteX = minute;
    } else if (hour == 12 && minute <= 59) {
        hourX = 12;
        minuteX = minute;
    } else if (hour >= 13 && hour <= 23) {
        hourX = hour - 12;
        minuteX = minute;
    } else {
        printf("Unknown time format.\n");
    }
    
    printf("Equivalent 12-hour time: %2d:%2d ", hourX, minuteX);
    
    if (hour >= 12 && hour <= 23) printf("PM\n");
    if (hour >= 0 && hour <= 11) printf("AM\n");
}

void C5Q4() {
    int speed;
    printf("Enter wind speed in knots: ");
    scanf("%d", &speed);
    
    if (speed < 1) {
        printf("Calm\n");
    } else if (speed >= 1 && speed <= 3) {
        printf("Light air\n");
    } else if (speed >= 4 && speed <= 27) {
        printf("Breeze");
    }
    // ...
    else {
        printf("Hurricane\n");
    }
}

void C5Q7() {
    int i1, i2, i3, i4, large1, large2, small1, small2, largest, smallest;
    printf("Enter 4 integers (space): ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    
    if (i1 > i2) {
        large1 = i1;
        small1 = i2;
    } else {
        large1 = i2;
        small1 = i1;
    }
    
    if (i3 > i4) {
        large2 = i3;
        small2 = i4;
    } else {
        large2 = i4;
        small2 = i3;
    }
    
    if (large1 > large2) {
        largest = large1;
    } else {
        largest = large2;
    }
    
    if (small1 > small2) {
        smallest = small2;
    } else {
        smallest = small1;
    }
    
    printf("Largest:  %d\n", largest);
    printf("Smallest: %d\n", smallest);
}

void C5Q9() {
    int day1, month1, year1;
    int day2, month2, year2;
    
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter first date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month2, &day2, &year2);
    
    if (year1 == year2 && month1 == month2 && day1 == day2) {
        printf("Both are the same.\n");
    }
    else if (year1 == year2 && month1 == month2) {
        if (day1 < day2) {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month1, day1, year1, month2, day2, year2);
        } else {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month2, day2, year2, month1, day1, year1);
        }
    }
    else if (year1 == year2) {
        if (month1 < month2) {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month1, day1, year1, month2, day2, year2);
        } else {
            printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month2, day2, year2, month1, day1, year1);
        }
    }
    else if (year1 < year2) {
        printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", month1, day1, year1, month2, day2, year2);
    }
    else {
        printf("%02d/%d02/%02d is earlier than %02d/%02d/%02d\n", month2, day2, year2, month1, day1, year1);
    }
}

void C5Q10() {
    int grade, digit1, digit2;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    
    if (grade < 0 || grade > 100) {
        printf("Incorrect grade entered.\n");
    } else {
        digit1 = grade / 10;
        digit2 = grade % 10;
        
        if (grade == 100) printf("A\n");
        else {
            switch (digit1) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5: printf("F\n"); break;
                case 6: printf("D\n"); break;
                case 7: printf("C\n"); break;
                case 8: printf("B\n"); break;
                case 9: printf("A\n"); break;
            }
        }
    }
}

void C5Q11() {
    int number, digit1, digit2;
    printf("Enter a 2 digit number: ");
    scanf("%d", &number);
    
    digit1 = number / 10;
    digit2 = number % 10;
    
    if (number > 99) {;
        printf("You must enter a two digit number.\n");
    }
    else if (number > 9 && number < 20) {
        switch (number) {
            case 10: printf("Ten\n"); break;
            case 11: printf("Eleven\n"); break;
            case 12: printf("Twelve\n"); break;
            case 13: printf("Thirteen\n"); break;
            case 14: printf("Fourteen"); break;
            case 15: printf("Fifteen\n"); break;
            case 16: printf("Sixteen\n"); break;
            case 17: printf("Seventeen\n"); break;
            case 18: printf("Eighteen\n"); break;
            case 19: printf("Nineteen\n"); break;
        }
    } else {
        switch (digit1) {
            case 2: printf("Twenty"); break;
            case 3: printf("Thirty"); break;
            case 4: printf("Forty"); break;
            case 5: printf("Fifty"); break;
            case 6: printf("Sixty"); break;
            case 7: printf("Seventy"); break;
            case 8: printf("Eighty"); break;
            case 9: printf("Ninety"); break;
        }
    
        switch (digit2) {
            case 0: printf("\n"); break;
            case 1: printf("-One\n"); break;
            case 2: printf("-Two\n"); break;
            case 3: printf("-Three\n"); break;
            case 4: printf("-Four\n"); break;
            case 5: printf("-Five\n"); break;
            case 6: printf("-Six\n"); break;
            case 7: printf("-Seven\n"); break;
            case 8: printf("-Eight\n"); break;
            case 9: printf("-Nine\n"); break;
        }
    }
}

int main(void) {
    C5Q9();
    return 0;
}

