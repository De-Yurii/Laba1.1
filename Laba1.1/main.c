#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// Program to check if two lines like a1*x + b1*y = c1 and a2*x + b2*y = c2 are crossing
int main(void) {
	float a1, b1, c1, a2, b2, c2;
	float x, y;

	printf("Enter a1 b1 c1\n");
	scanf("%f %f %f", &a1, &b1, &c1);
	
	printf("Enter a2 b2 c2\n");
	scanf("%f %f %f", &a2, &b2, &c2);
	
	if (a1 == a2 && b1 == b2) { // Checking if lines are parallel
		printf("The lines aren't crossing\n");
	}
	else {
		x = (b1 * c2 - b2 * c1) / (b1 * a2 - b2 * a1); // Find x of crossing by math formula
		y = (c1 - a1 * x) / b1; // Find y of crossing

		printf("Crossing: (%f; %f)\n", x, y);
	}
	return 0;
}