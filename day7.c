#include <stdio.h>
#include "calc.h"
#include "showResult.h"

//double avg(double, double);

int main (void){
    int a = 2,b = 3, ans;
    printf("%d + %d = ",a,b);
    add(a,b);
    showAnswer(ans);
    printf("%d - %d = ",a,b);
    sub(a,b);
    showAnswer(ans);
    
    return 0;
}

/*
double avg(double l, double m){
    double r = (l + m) / 2.0;
    return r;
}
*/