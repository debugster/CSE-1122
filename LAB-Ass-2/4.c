/*
* Program to determine Gross and Net Pay
*/


#include <stdio.h>

int main()
{
    double hour, rate, gross, net, tax = 0;
    printf("Enter hours and rates : ");
    scanf("%lf%lf", &hour, &rate);

    gross = hour * rate;
    if (gross > 5000) {
        tax = gross * 0.05;
    }
    net = gross - tax;
    printf("Gross Pay = TK. %.2lf\nNet Pay = TK. %.2lf\n", gross, net);
    return 0;
}

