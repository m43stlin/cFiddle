#include <stdio.h>

int main() {
	int n, revNum = 0, remainder;

	printf("Enter an interger: ");
	scanf("%d", &n);

	while (n != 0) {
		/*
		 * -	Take out the remainder.
		 * -	Multiply the current number by 10 and add the remainder.
		 * -	Divide the number to set for next iteration.
		 */
		remainder = n%10;
		revNum = revNum*10 + remainder;
		n /= 10;
	}

	printf("Reversed Number = %d", revNum);

	return 0;
}