#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include <math.h>
#include "randLib.h"

int add(int, int);
int sub(int, int);
int mul(int, int);
double circumference(double);
double area_of_a_circle(double);

/*
make a program to print out your name. 
make new line at the end of the print statement.
*/
int practice_1_1(void){
    printf("My name is %s\n", "Gak Roppongi");
    return 0;
}

/*
make the program below so that it has only one "printf()"
*/
int practice_1_2(void){
    printf("123\n456\n789\n");
    return 0;
}

/*
make the prgram below to print out "1 + 1 = 2" and "2 + 3 = 5"
*/
int practice_1_3(void){
    int a = 1;
    int sum_1 = a + a;
    int b = 2, c = 3;
    int sum_2 = b + c;
    printf("%d + %d = %d\n", a, a, sum_1);
    printf("%d + %d = %d\n", b, c, sum_2);
    return 0;
}

/*
change the practice_1_3 to print "1 + 2 + 3 = 6"
*/
int practice_1_4(void){
    int a = 1, b = 2, c = 3;
    int sum = a + b + c;
    printf("%d + %d + %d = %d\n", a, b, c, sum);
    return 0;
}

int practice_2_1(void){
    int a, b;
    printf("type values for a and b\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d and %d\n", a, b, a / b, a % b);
    return 0;
}

int practice_2_2(void){
    int width, height;
    printf("type the width and the height\n");
    scanf("%d", &width);
    scanf("%d", &height);
    printf("the area of the rectangle is %d\n", width * height);
    return 0;
}

int practice_3_1(void){
    int num;
    return 0;
}

int practice3_6(void){
    int n, range;
    printf("type number\n");
    scanf("%d", &range);
    srand((unsigned)time(NULL));
    n = rand() % range + 1;
    printf("the generated random number is: %d\n", n);
    return 0;
}

int practice_3_12(void){
    int n;
    srand((unsigned)time(NULL));
    n = rand() % 20 + 1;
    n -= 10;
    printf("the generated number is : %d\n", n);
    return 0;
}

int practice_4_1(void){
    int i;
    int n;

    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;

    printf("n = %d\n", n);

    for (i = 1; i <= n; i++){
        printf("■");
    }
    printf("\n");
    return 0;
}

int practice_4_2(void){
    int i = 1;
    int n;

    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;

    printf("n = %d\n", n);

    while(i <= n){
        printf("■");
        i++;
    }
    printf("\n");
    return 0;
}

int practice_4_3(void){
    int i = 1;
    int n;

    srand((unsigned)time(NULL));
    n = rand() % 10 + 1;

    printf("n = %d\n", n);

    do{
        printf("■");
        i++;
    }while(i <= n);

    return 0;
}

int practice_4_4(void){
    int a = 0;

    while(a <= 3){
        printf("a = %d\n", a);
        a++;
    }

    return 0;
}

int practice_4_5(void){
    int a;

    for (a = 0; a <= 3; a++){
        printf("a = %d\n", a);
    }

    return 0;
}

int practice_4_6(void){
    int a = 3;

    while(a >= 0){
        printf("a = %d\n", a);
        a--;
    }

    return 0;
}

int practice_4_7(void){
    int a;

    for (a = 3; a >= 0; a--){
        printf("a = %d\n", a);
    }

    return 0;
}

int practice_4_8(void){
    int n;

    while(1){
        srand((unsigned)time(NULL));
        n = rand() % 10 + 1;
        printf("n = %d\n", n);

        if (n == 10){
            printf("end the loop with n = %d\n", n);
            break;
        }
    }

    return 0;
}

int practice_4_12(void){
    int n, a, i;

    a = 0;
    srand((unsigned)time(NULL));

    for (i = 0; i <= 5; i++){
        n = rand() % 100 + 1;
        if (a < n){
            a = n;
        }
        printf("n = %d\n", n);
    }

    printf("max = %d\n", a);

    return 0;
}

int practice_4_17(void){
    int i, j;
    for (i = 0; i <= 10; i++){
        for (j = 0; j <= 10; j++){
            if (i >= j){
                printf("■");
            }
            else{
                printf("□");
            }
        }
        printf("\n");
    }

    return 0;
}

int practice_4_18(void){
    int i, j;
    for (i = 0; i <= 10; i++){
        for (j = 0; j <= 10; j++){
            if (i == j){
                printf("□");
            }
            else{
                printf("■");
            }
        }
        printf("\n");
    }

    return 0;
}

int practice_5_1(void){
    int array[6];
    int i;
    srand((unsigned)time(NULL));
    
    for (i = 0; i < 6; i++){
        array[i] = rand() % 10 + 1;
    }

    for (i = 0; i < 6; i++){
        printf("a[%d] = %d ", i, array[i]);
    }

    return 0;
}

int practice_5_3(void){
    int array[10], odd[10], even[10];
    int i, j, k;
    j = 0;
    k = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++){
        array[i] = rand() % 10 + 1;
    }    

    for (i = 0; i < 10; i++){
        printf("a[%d] = %d ", i, array[i]);

        if (array[i] % 2 == 0){
            even[j] = array[i];
            j++;
        }
        else if (array[i] % 2 == 1){
            odd[k] = array[i];
            k++;
        }
    }
    printf("\n");

    for (i = 0; i < j; i++){
        printf("even[%d] = %d ", i, even[i]);
    }
    printf("\n");

    for (i = 0; i < k; i++){
        printf("odd[%d] = %d ", i, odd[i]);
    }
    printf("\n");

    return 0;
}

int practice_5_5(void){
    int array[10], three[10], not_three[10];
    int i, j, k;
    j = 0;
    k = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++){
        array[i] = rand() % 10 + 1;
    }    

    for (i = 0; i < 10; i++){
        printf("array[%d] = %d ", i, array[i]);

        if (array[i] % 3 == 0){
            three[j] = array[i];
            j++;
        }
        else if (array[i] % 3 != 0){
            not_three[k] = array[i];
            k++;
        }
    }
    printf("\n");

    for (i = 0; i < j; i++){
        printf("three[%d] = %d ", i, three[i]);
    }
    printf("\n");

    for (i = 0; i < k; i++){
        printf("not_three[%d] = %d ", i, not_three[i]);
    }
    printf("\n");

    return 0;
}

int practice_5_7(void){
    int array[5], big[5], small[5];
    int i, sum, avg, j, k;
    j = 0;
    k = 0;
    sum = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 5; i++){
        array[i] = rand() % 10 + 1;
        printf("array[%d] = %d ", i, array[i]);
        sum += array[i];
    }    

    printf("\n");
    avg = sum / 5;
    printf("sum = %d, avg = %d\n", sum, avg);

    for (i = 0; i < 5; i++){
        if (array[i] < avg){
            big[j] = array[i];
            j++;
        }

        else if (array[i] > avg){
            small[k] = array[i];
            k++;
        }
    }

    printf("bigger than avg: ");
    for (i = 0; i < j; i++){
        printf("%d ", big[i]);
    }
    printf("\n");

    printf("smaller than avg: ");
    for (i = 0; i < k; i++){
        printf("%d ", small[i]);
    }
    printf("\n");

    return 0;
}

int practice_5_9(void){
    int array[10], big[10], small[10];
    int i, j, k;
    j = 0;
    k = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 10; i++){
        array[i] = rand() % 100 + 1;
        printf("%d ", array[i]);
    } 
    printf("\n"); 

    for (i = 0; i < 10; i++){
        if (array[i] >= 50){
            big[j] = array[i];
            j++;
        }

        else if (array[i] < 50){
            small[k] = array[i];
            k++;
        }
    }

    printf("bigger than 50: ");
    for (i = 0; i < j; i++){
        printf("%d ", big[i]);
    }
    printf("\n");

    printf("smaller than 50: ");
    for (i = 0; i < k; i++){
        printf("%d ", small[i]);
    }
    printf("\n");

    return 0;
}

int practice_5_11(void){
    int array[5], zero_sixty[5], sixty_eighty[5], eighty[5];
    int i, j, k, l;
    j = 0;
    k = 0;
    l = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 5; i++){
        array[i] = rand() % 100 + 1;
        printf("%d ", array[i]);
    } 
    printf("\n"); 

    for (i = 0; i < 5; i++){
        if (array[i] < 60){
            zero_sixty[j] = array[i];
            j++;
        }

        else if (60 <= array[i] && array[i] < 80){
            sixty_eighty[k] = array[i];
            k++;
        }

        else if (80 <= array[i]){
            eighty[l] = array[i];
            l++;
        }
    } 

    printf("~ 60: ");
    for (i = 0; i < j; i++){
        printf("%d ", zero_sixty[i]);
    }
    printf("\n");

    printf("60 ~ 80: ");
    for (i = 0; i < k; i++){
        printf("%d ", sixty_eighty[i]);
    }
    printf("\n");

    printf("80 ~: ");
    for (i = 0; i < l; i++){
        printf("%d ", eighty[i]);
    }
    printf("\n");

    return 0;
}

int practice_5_13(void){
    int matrix[3][3];
    int m, n, max, min;
    max = 0;
    min = 10;

    srand((unsigned)time(NULL));

    for (m = 0; m < 3; m++){
        for (n = 0; n < 3; n++){
            matrix[m][n] = rand() % 10;
            printf("%d ", matrix[m][n]);

            if (max < matrix[m][n]){
                max = matrix[m][n];
            }
            else if (matrix[m][n] < min){
                min = matrix[m][n];
            }
        }
        printf("\n");
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}

void p_6_1(){
    int a, b, addition, substraction, multiplication;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    addition = add(a,b);
    substraction = sub(a,b);
    multiplication = mul(a, b);
    printf("%d + %d = %d\n", a,b,addition);
    printf("%d - %d = %d\n", a,b,substraction);
    printf("%d * %d = %d\n", a,b,multiplication);
}

void p_6_3(){
    double bottom, height, area;

    printf("bottom = ");
    scanf("%lf", &bottom);
    printf("height = ");
    scanf("%lf", &height);

    area = (bottom * height) / 2.0;

    printf("the area of this triangle is = %f\n", area);
}

void p_6_7(){
    double radius;
    printf("radius = ");
    scanf("%lf", &radius);

    printf("the circumference of the circle is = %f\n", circumference(radius * 2));
    printf("the area of the circle is = %lf\n", area_of_a_circle(radius));
}

void p_6_8(){
    int absolute;

    printf("value? = ");
    scanf("%d", &absolute);

    absolute = abs(absolute);
    printf("absolute value of the input is = %d\n", absolute);
}

void p_7_2(){
    int i, num;
    init_rand();

    for (i = 0; i < 100; i++){
        num = getRand(1, 100);
        printf("%d", num);
    }
}

int add(int m, int n){
    return m + n;
}

int sub(int m, int n){
    return m - n;
}

int mul(int m, int n){
    return m * n;
}

double circumference(double diameter){
    return 3.14 * diameter;
}

double area_of_a_circle(double radius){
    return 3.14 * pow(radius, 2);
}

int main(void){
    //practice_1_1();
    //practice_1_2();
    //practice_1_3();
    //practice_1_4();
    //practice_2_1();
    //practice_2_2();
    //practice3_6();
    //practice_3_12();
    //practice_4_1();
    //practice_4_2();
    //practice_4_3();
    //practice_4_4();
    //practice_4_5();
    //practice_4_6();
    //practice_4_7();
    //practice_4_8();
    //practice_4_12();
    //practice_4_17();
    //practice_4_18();
    //practice_5_1();
    //practice_5_3();
    //practice_5_5();
    //practice_5_7();
    //practice_5_9();
    //practice_5_11();
    //practice_5_13();
    //p_6_1();
    //p_6_3();
    //p_6_7();
    //p_6_8();
    p_7_2();

    return 0;
}