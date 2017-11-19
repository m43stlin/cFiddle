#include <stdio.h>

/*
 * Program to check for prime numbers between an interval.
 */
int main() {

	int low, high, flag = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &low, &high);

	printf("Prime numbers between %d and %d are: ", low, high);

	while (low < high) {

		flag = 0;

		/*
		 * Iterate between 2 and your lowest number - 1.
		 */
		for (int i = 2; i <= low-1 ; ++i) {

			/*
			 * Break the loop if even divisibility is found.
			 */
			if (low % i == 0) {
				flag = 1;
				break;
			}
		}

		/*
		 * If the flag is still zero the number is prime.
		 */
		if (flag == 0) {
			printf("%d ", low);
		}

		/*
		 * Increment the value of low.
		 */
		++low;
	}

	return 0;

}