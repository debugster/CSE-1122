#include <stdio.h>
#define PI 3.1416

int main() {
	double radius, area, circum;
	printf("Enter the radius : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("Area = %0.2lf square unit\n", area);
	printf("Circumference = %0.2lf unit\n", circum);
	return 0;
}