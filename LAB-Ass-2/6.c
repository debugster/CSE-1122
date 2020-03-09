/*
* Program to calculate Electric Charges
*/


#include <stdio.h>

int main()
{
    double unit, total;
    char name[20];
    printf("Enter name : ");
    gets(name);
    printf("Enter used units : ");
    scanf("%lf", &unit);

    if (unit >= 0 && unit <= 100) {
        total = unit * 1.75;
    }
    else if (unit > 100 && unit <= 300) {
        total = (100 * 1.75) + ((unit - 100) * 2.25);
    }
    else if (unit > 300) {
        total = (100 * 1.75) + (200 * 2.25) + ((unit - 300) * 3.50);
    }

    if (total < 100) {
        total = 100;
    }
    else if (total > 1000) {
        total +=  (total * 0.15);
    }

    printf("Name\t\t: %s\n", name);
    printf("Total Charge\t: %.2lf\n", total);
    return 0;
}
