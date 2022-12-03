#include <stdio.h>

void main() {
    // single line comment
    /* multiline
    comment
    adsfaf */

    int a = 10;
    // printf("hello");

    printf("a = %d\n", a);

    a += 2;
    printf("a = %d\n", a);
    
    a -= 4;
    printf("a = %d\n", a);
    
    a *= 4;
    printf("a = %d\n", a);
    
    a /= 4;
    printf("a = %d\n", a);


    printf("%d\n\n", a > 5);

    printf("%d\n\n", a > 8);
    
    printf("%d\n\n", a >= 8);

    printf("%d\n\n", a >= 8);
    
    
    printf("%d\n\n", a > 8 && a == 8);

    printf("%d\n\n", a > 8 || a == 8);

    printf("%d\n\n", a != 8);

    // printf("Enter any number: ");

    // scanf("%d", &a);

    // if (a == 8) {
    //     printf("%d is equal to %d\n\n", a, 8);
    // } else {
    //     printf("%d is not equal to %d\n\n", a, 8);
    // }

    printf("ASCII\n\n");

    char c1 = 'b', c2 = 'B';

    printf("%c", c1);


    printf("ascii of %c is %d\n\n", c1, c1);

    printf("ascii of %c is %d\n\n", c2, c2);

    printf("difference: %c - %c = %d\n\n", c1, c2, c1-c2);

    // case conversion
    printf("%c", 'z' - 32);

}