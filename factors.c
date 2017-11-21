#include <stdio.h>

/*
 * Program for finding factors of an integer
 */
int main() {
	int number;

	printf("Enter an int: ");
	scanf("%d", &number);

	printf("Factors of %d are ", number);

	for (int j = 1; j <= number; ++j) {
		if (number % j == 0) {
			printf("%d ", j);
		}
	}

	return 0;
}