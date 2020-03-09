#include <stdio.h>

int main() {
	double X, Y, Z, total, av;
	printf("Enter three marks : ");
	scanf("%lf%lf%lf", &X, &Y, &Z);
	total = X + Y + Z;
	av = total / 3;
	printf("Total = %0.2lf\n", total);
	printf("Average = %0.2lf\n", av);
	return 0;
}