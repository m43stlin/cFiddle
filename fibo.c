#include <stdio.h>

/*
 * This generates a Fibonacci Sequence up to a certain number.
 */
int main() {
	int t1 = 0, t2 = 1, nextTerm = 0, n;

	printf("Enter a positive number: ");
	scanf("%d", &n);

	printf("Fibonacci Series: %d, %d, ", t1, t2);

	nextTerm = t1 + t2;

	/*
	 * Eg. 10 (n = 10)
	 * 		0
	 * 		0 = 1
	 * 		(t1 = 1)
	 * 		1 = nextTerm;
	 * 		nextTerm = 1 + 1 = 2.
	 *
	 * 		2
	 * 		1 = 1
	 * 		2 = nT
	 * 		nT = 2 + 1 = 3
	 *
	 * 		3
	 * 		2 = 2
	 * 		2 = 3
	 * 		nt = 2 + 3 = 5
	 *
	 * 		5
	 * 		3 = 3
	 * 		3 = 5
	 * 		nt = 3 + 5 = 8
	 */
	while (nextTerm <= n) {
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return 0;
}