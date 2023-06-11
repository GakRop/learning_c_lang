#include <stdio.h>

int main(void){
    /*
    printf("%d + %d = %d\n", 5, 2, 5+2);
    printf("%d - %d = %d\n", 5, 2, 5-2);
    printf("%d * %d = %d\n", 5, 2, 5*2);
    printf("%d / %d = %d\n", 5, 2, 5/2);
    printf("%d % %d = %d 余り %d\n", 5, 2, 5%2);
    */

    /*
    // make sure to default and then use all variables
    // otherwise variables might have some preset values
    // all variables must be declared at the beginning of a function
    // they should be declared before any processing
    int a; // declaring the int type variable
    int b = 3;
    int add, sub;
    double avg; 
    a = 6; // substitute the actual value for a variable
    add = a + b;
    sub = a - b;
    avg = (a + b) / 2.0;
    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("average betweek %d and %d = %f\n", a, b, avg);
    */

    /* 
    Data type in C:
    char: 1 bite character
    unsigned char: 1 bite character without sign
    short: 2 bite integer with signs
    unsigned short: 2 bite integer without signs
    long: 4 bite integer with signs
    unsigned long: 4 bite integer without signs
    int: 2 or 4 bite integers with signs (might be the same as "long")
    unsigned 2 or 4 bite integers without signs
    float: 4 bite numbers with decimals
    double: 8 bite numbers with decimals
    */

    /*
    int a1 = 2, b1 = 2, c1 = 2, d1 = 2;
    int a2 = 2, b2 = 2, c2 = 2, d2 = 2;

    a1 = a1 + 1;
    b1 = b1 - 1;
    c1 = c1 * 1;
    d1 = d1 / 1;

    a2 += 1;
    b2 -= 1;
    c2 *= 1;
    d2 /= 1;

    printf("a1 = %d b1 = %d c1 = %d d1 = %d\n", a1, b1, c1, d1);
    printf("a2 = %d b2 = %d c2 = %d d2 = %d", a2, b2, c2, d2);
    */

    /*
    int i1, i2, j1, j2;
    double d1, d2, e1, e2;

    j1 = 3;
    j2 = 3;
    d1 = 1.23;
    d2 = 1.23;
    i1 = d1;
    //cast a doubel to int
    i2 = (int)d2;
    e1 = j1;
    //cast an int to double
    e2 = (double)j2;

    printf("d1 = %f d2 = %f\n", d1, d2);
    printf("i1 = %d i2 = %d\n", i1, i2);
    printf("j1 = %d j2 = %d\n", j1, j2);
    printf("e1 = %f e2 = %f\n", e1, e2);
    */

    return 0;
}

/*
To run a code on terminal...
gcc file_name.c -o file_name
./file_name
\n
*/