#include <stdio.h>
#include <math.h>

int main() {
	double a = 1.0, b = -5.0, c = 6.0, root1, root2, det;
	if (a != 0) {
		det = (b * b) - (4 * a * c);
		if (det >= 0.0) {
			root1 = (-b + sqrt(det)) / (2 * a);
			root2 = (-b - sqrt(det)) / (2 * a);
			printf("The roots are %0.2lf and %0.2lf\n", root1, root2);
		}
		else {
			printf("Undetermined.\n");
		}
	}
	else {
		printf("a cannot be zero.\n");
	}
	return 0;
}