#include <stdio.h>

int main() {

	int n, rem, revNum, oN;

	printf("Enter an integer: ");
	scanf("%d", &n);

	oN = n;

	while (n != 0) {
		rem = n%10;
		revNum = revNum*10 + rem;
		n /= 10;
	}

	if(oN == revNum) {
		printf("%d is a palindrome", oN);
	} else {
		printf("%d is not a palindrome", oN);
	}


}