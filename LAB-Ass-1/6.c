#include <stdio.h>
#include <math.h>

int main() {
	double a, b, hypo;
	printf("Enter the lengths of two sides : ");
	scanf("%lf%lf", &a, &b);
	if (a > 0.0 && b > 0.0) {
		hypo = sqrt(a * a + b * b);
		printf("Hypotenuse = %0.2lf\n", hypo);
	}
	else {
		printf("Side cannot be zero or negative.\n");
	}
	return  0;
}