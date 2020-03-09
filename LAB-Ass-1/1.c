#include <stdio.h>

int main() {
	int A, B;
	double div;
	printf("Enter two integers : ");
	scanf("%d%d", &A, &B);
	printf("Addition : %d + %d = %d\n", A, B, A + B);
	printf("Subtraction : %d - %d = %d\n", A, B, A - B);
	printf("Multiplication : %d X %d = %d\n", A, B, A * B);
	if (B != 0) {
		div = (double) A / B;
		printf("Division : %d / %d = %0.2lf\n", A, B, div);
	}
	else {
		printf("Division : Undefined ! Cannot divide by zero.\n");
	}
	return 0;
}
