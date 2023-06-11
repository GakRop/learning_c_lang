#include <stdio.h>

/*
for loop
*/
int for_loop(void){
    int i, j;
    for (i = 1; i <= 2; i++){
        for (j = 1; j <= 3; j++){
            printf("%d + %d = %d\n", i, j, i+j);
        }
    }
    return 0;
}

/*
while loop
*/
int while_loop(void){
    int i = 0;
    while (i <= 5){
        printf("%d\n", i);
        i++;
    }
    return 0;
}

/*
do-while
*/
int do_while_loop(void){
    int i = 0;
    do{
        printf("%d\n", i);
        i++;
    }while(i <= 5);
    return 0;
}

int list_4_5(void){
    int i,num;
    printf("回数を入力：");
    scanf("%d",&num);   //  キーボードからループの回数を入力
    //  whileループで実行
    printf("whileで実行");
    i = 1;
    while(i <= num){
        printf("*");
        i++;
    }
    printf("\n");
    //  do～whileループで実行
    printf("do～whileで実行");
    i = 1;
    do{
        printf("*");
        i++;
    }while(i <= num);
    printf("\n");   
    return 0;
}

int main(void){
    //for_loop();
    //while_loop();
    //do_while_loop();
    list_4_5();
    return 0; 
}