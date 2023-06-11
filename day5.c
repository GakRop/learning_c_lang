#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int list5_2(void){
    double d[100];
    double sum, avg;
    int i, n, m;

    m = 50;
    sum = 0.0;

    srand((unsigned)time(NULL));

    for (i = 0; i < m; i++){
        n = rand();
        d[i] = n;
    }

    for (i = 0; i < m; i++){
        printf("%f\n", d[i]);
        sum += d[i];
    }

    avg = sum / m;

    printf("sum = %f\n", sum);
    printf("average = %f\n", avg);

    return 0;
}

int list5_3(void){
    int n[] = {5, 4, 3, 2, 1};
    int i;

    for (i = 0; i < 5; i++){
        printf("n[%d] = %d ", i, n[i]);
    }

    printf("\n");
    return 0;
}

int list5_4(void){
    char s1[4] = { 'a','b','c','\0' };
    //char s2[] = 'HelloWorld.\0';
    char s3[10];

    printf("type a char list: ");
    scanf("%s", s3);
    printf("s1 = %s\n", s1);
    //printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    return 0;
}

int list5_5(void){
    int a[3][4];
    int m, n;

    for (m = 0; m < 3; m++){
        for (n = 0; n < 4; n++){
            a[m][n] = m + n;
        }
    }

    for (m = 0; m < 3; m++){
        for (n = 0; n < 4; n++){
            printf("%d ", a[m][n]);
        }
        printf("\n");
    }
    return 0;
}

int main(void){
    //list5_2();
    //list5_3();
    //list5_4();
    list5_5();
    return 0;
}