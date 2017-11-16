#include <stdio.h>

int main() {
	long long n;
	int c = 0;

	printf("Enter an integer: ");
	scanf("%lld", &n);

	/*
	 * Since we are dealing with integers once the value drops to
	 * below 0 we will have our result produced by dividing by 10.
	 */
	while (n != 0) {
		n /= 10;
		++c;
	}

	printf("Number of digits: %d", c);
}