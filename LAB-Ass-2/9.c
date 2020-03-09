/*
* Program to show date in MMM dd, yyyy format
*/


#include <stdio.h>

int main()
{
    int date, month, year;
    printf("Enter date in the following format dd-mm-yyyy : " );
    scanf("%2d-%2d-%4d", &date, &month, &year);

    switch (month) {
        case 1:
            printf("January ");
            break;
        case 2:
            printf("February ");
            break;
        case 3:
            printf("March ");
            break;
        case 4:
            printf("April ");
            break;
        case 5:
            printf("May ");
            break;
        case 6:
            printf("June ");
            break;
        case 7:
            printf("July ");
            break;
        case 8:
            printf("August ");
            break;
        case 9:
            printf("September ");
            break;
        case 10:
            printf("October ");
            break;
        case 11:
            printf("November ");
            break;
        case 12:
            printf("December ");
            break;
    }
    switch (date) {
        case 1:
        case 21:
        case 31:
            printf("%dst, ", date);
            break;
        case 2:
        case 22:
            printf("%dnd, ", date);
            break;
        case 3:
        case 23:
            printf("%drd, ", date);
            break;
        default:
            printf("%dth, ", date);
            break;
    }
    printf("%d\n", year);
    return 0;
}
