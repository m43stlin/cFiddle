#include <stdio.h>

/*
 * Calculate the power of a number without using the
 * math library.
 */

int main() {

	double base, exponent;
	long long result = 1;

	printf("Enter a base: ");
	scanf("%lf", &base);

	printf("Enter a exponent: ");
	scanf("%lf", &exponent);

	while (exponent != 0) {
		result *= base;
		--exponent;
	}

	printf("Answer = %lld", result);

	return 0;
}