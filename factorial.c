#include <stdio.h>

int main() {
	int n, i;
	unsigned long long factorial = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	/*
	 * Show error is user enters a negative integer
	 */
	if (n < 0) {
		printf("Error: cannot calculate factorial of a negative number.");
	} else {

		for (i = 1; i <= n; ++i) {
			factorial *= i;
		}
		printf("Factorial of %d = %llu", n, factorial);
	}


	return 0;
}