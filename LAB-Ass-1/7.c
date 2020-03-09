#include <stdio.h>
#include <math.h>

int main() {
	double A, B, C, S, area;
	printf("Enter three sides : ");
	scanf("%lf%lf%lf", &A, &B, &C);
	if (A > 0.0 && B > 0.0 && C > 0.0) {
		if ((A + B) > C && (A + C) > B && (B + C) > A) {
			S = (A + B + C) / 2;
			area = sqrt(S * (S - A) * (S - B) * (S - C));
			printf("Area = %0.2lf\n", area);
		}
		else {
			printf("Sum of any two sides must be greater than the third side\n");
		}
	}
	else {
		printf("Side cannot be zero or negative.\n");
	}
}