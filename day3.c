#include<stdio.h>
/*
gcc day_3.c -o day_3
./day_3
*/
int main(void){
    /*
    int dice;
    printf("type 1 ~ 6\n");
    scanf("%d", &dice);
    if (1 <= dice && dice <= 6){
        if (dice % 2 == 0){
            printf("this is even\n");
        }
        else{
            printf("this is odd\n");
        }
    }
    else{
        printf("this is not a correct input\n");
    }
    */

    //switch statements
    int num;
    printf("type 1 ~ 3\n");
    scanf("%d", &num);

    switch(num){
        case 1:{
            printf("one\n");
            break;
        }
        case 2:{
            printf("two\n");
            break;
        }
        case 3:{
            printf("three\n");
            break;
        }
        default:{
            printf("this is not a correct input\n");
            break;
        }
    }
    return 100;
}