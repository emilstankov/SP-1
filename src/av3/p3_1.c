#include <stdio.h>
#define PI 3.1415
int main() {
	float r;
	float P = 0, L = 0;
	printf("Enter the radius of the circle: ");
	scanf("%f", &r);
	L = 2 * r * PI;
	P = r * r * PI;
	printf("P = %f\n", P);
	printf("L = %f\n", L);
	return 0;
}
