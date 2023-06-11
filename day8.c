#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void trigonometry(void){
    int angle;
    double rad;

    printf("angle b/w 0 ~ 360\n");
    scanf("%d", &angle);

    rad = M_PI * (double)angle / 180.0;

    printf("sin(%d)=%f\n",angle,sin(rad));
    printf("cos(%d)=%f\n",angle,cos(rad));
    printf("tan(%d)=%f\n",angle,tan(rad));
}

void mathematics(void){
    int n = -2;
    double d1 = -2.5, d2 = 1.037458298738957;

    printf("the absolute value of %d is %d\n", n, abs(n));
    printf("the absolute value of %f is %f\n", d1, fabs(d1));
    printf("the squared value of %f is %f\n", d2, pow(d2, 945.47));
    printf("the square root of %f is %f\n", d2, sqrt(d2));
}

void bit_calculation(void){
    unsigned char i = 0xf;
    unsigned char j = 0xff;

    printf("%x << 1 = %x\n", i, i << 1);
    printf("%x << 1 = %x\n", i, j >> 1);
    printf("%x | %x = %x\n", i, j, i | j);
    printf("%x | %x = %x\n", i, j, i & j);
    printf("~%x = %x\n",i,(unsigned char)~i);
}

int main(void){
    /*
    int a,b;

    srand((unsigned) time(NULL));

    a = rand() % 10 + 1;
    b = rand() % 10 + 1;

    printf("%d + %d = %d\n", a, b, a+b);
    */
    //trigonometry();
    //mathematics();
    bit_calculation();

    return 0;
}