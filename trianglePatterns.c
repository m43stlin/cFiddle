#include <stdio.h>

int main() {
	int rows = 5;

	/*
	 * Print half pyramid using stars
	 *
	 * The main purpose of the embedded loop is because of
	 * the new line character.
	 *
	 * Print the number of necessary stars in the embedded loop
	 * and then print the new line character in the outer loop
	 */
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n");


	/*
	 * Print the half pyramid using numbers instead of stars.
	 */
	for (int i = 1; i <= rows; ++i) {
		for (int j = 1; j <=i ; ++j) {
			printf("%d ", j);
		}
		printf("\n");
	}

	printf("\n");


	/*
	 * Print the half pyramid using the alphabet
	 */
	char alphabet = 'A';

	for (int i = 1; i <= rows ; ++i) {
		for (int j = 1; j <= i ; ++j) {
			printf("%c ", alphabet);
		}
		++alphabet;
		printf("\n");
	}


	printf("\n");


	/*
	 * Print inverted half pyramid
	 *
	 * Outer loop
	 * 		5, while >= 1, --5
	 *
	 * 		Inner loop
	 * 				1,	while <= 5, ++5
	 *
	 *
	 */
	for (int i = rows; i >= 1 ; --i) {
		for (int j = 1; j <= i ; ++j) {
			printf("* ");
		}
		printf("\n");
	}


	/*
	 * Full pyramid
	 */
	int space, k = 0;

	for (int i = 1; i <= rows ; ++i, k = 0) {
		for (space = 1; space <= rows-i; ++space) {
			printf("  ");
		}

		while(k != 2*i-1) {
			printf("* ");
			++k;
		}

		printf("\n" );
	}


	return 0;
}