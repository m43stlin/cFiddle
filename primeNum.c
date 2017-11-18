#include <stdio.h>

int main() {

	int n, flag = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &n);


	for (int i = 2; i <= n/2 ; ++i) {
		/*
		 * non prime
		 */
		if(n%i == 0) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		printf("%d is a prime number.", n);
	} else {
		printf("%d is not a prime number.", n);
	}

	return 0;
}