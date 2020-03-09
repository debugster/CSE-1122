#include <stdio.h>

int main() {
	double F, C;
	printf("Enter temperature in degree Fahrenheit scale : ");
	scanf("%lf", &F);
	C = (5.0 / 9) * (F - 32);
	printf("%0.2lf degree F = %0.2lf degree C\n", F, C);
	return 0;
}