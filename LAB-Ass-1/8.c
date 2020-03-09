#include <stdio.h>
#include <math.h>

int main() {
	double x, y, z;
	printf("Enter the value of x : ");
	scanf("%lf", &x);
	if (x != 0.0) {
		z = (x - 1) / x;
		y = z + pow(z, 2) / 2 + pow(z, 3) / 3 + pow(z, 4) / 4;
		printf("Y = %0.2lf\n", y);
	}
	else {
		printf("Undefined\n");
	}
	return 0;
}