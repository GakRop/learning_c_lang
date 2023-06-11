#include <stdio.h>

/*int main(){
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';

    printf("aの値は%d、アドレスは0x%x¥n", a, &a);
    printf("bの値は%f、アドレスは0x%x¥n", b, &b);
    printf("cの値は%f、アドレスは0x%x¥n", c, &c);
    printf("aの値は%c、アドレスは0x%x¥n", d, &d);

    return 0;
}*/

/*void show(int, int, int);

int main(void){
    int a = 100;
    int b = 200;
    int *p = NULL;
    p = &a;
    show(a, b, *p);

    *p = 300;
    show(a, b, *p);

    p = &b;
    show(a, b, *p);

    *p = 400;
    show(a, b, *p);

    return 0;
}

void show(int n1, int n2, int n3){
    printf("a = %d, b = %d, *p = %d\n", n1, n2, n3);
}*/

void swap(int*, int*);

int main(void){
    int a = 1, b = 2;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
}

void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}