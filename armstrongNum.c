#include <stdio.h>
#include <math.h>

/*
 * Program to check if a number is an Armstrong number
 * of n digits.
 *
 * A number is an Armstrong number if:
 * 		abc... = a^n + b^n + c^n
 */

int main() {

	int num, origNum, rem, res = 0, n = 0;

	printf("Enter an integer: ");
	scanf("%d", &num);

	/*
	 * This first while loop is used to calculate the
	 * value of n to use in the second while loop.
	 */
	origNum = num;

	while (origNum != 0) {
		origNum /= 10;
		n++;
	}

	/*
	 * origNum is set back to num to use in the second
	 * while loop.
	 */
	origNum = num;

	while (origNum != 0) {
		rem = origNum%10;
		/*
		 * The value of n here is set by the first while
		 * loop.
		 */
		res += pow(rem, n);
		origNum /= 10;
	}

	/*
	 * Stdout results.
	 */
	if (res == num) {
		printf("%d is an Armstrong number.", num);
	} else {
		printf("%d is not an Armstrong number.", num);
	}

	return 0;
}