#include <stdio.h>

int main() {
	double C, I;
	printf("Enter length in Centimeter scale : ");
	scanf("%lf", &C);
	I = C / 2.54; // 2.54 Cm = 1 Inch
	printf("%0.2lf Cm(s) = %0.2lf Inch(es)\n", C, I);
	return 0;
}