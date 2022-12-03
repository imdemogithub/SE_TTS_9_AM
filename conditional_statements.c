#include <stdio.h>

void main() {
    // conditional statements using Relational operators
    
    int a = 5, b =6;

    // true - 1
    // false - 0

    // printf("%d", a > b);
    if (a > b) {
        printf("%d is greater then %d\n", a, b);
    } else {
        printf("%d is less then %d\n", a, b);
    }

    // else if
    if (a > b) {
        printf("%d is greater then %d\n", a, b);
    } else if (b > a) {
        printf("%d is less then %d\n", a, b);
    }

    // grouping using logical operator
    if (a > 1 && b < 10) {
        printf("%d is greater then %d and %d also less then %d", a, 1, b, 10);
    }

    printf("\n");

    // != operator
    if (a != b) {
        printf("%d is not equals to %d\n", a, b);
    } else {
        printf("%d is equals to %d\n", a, b);
    }
    
    printf("\n");

    // >=
    if (a > 6 || a == 5) {
        printf("True");
    } else {
        printf("False");
    }

    printf("\n");

    // ! operator
    printf("%d", !(a > b));
}