#include <stdio.h>

int main() {
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	/*
	 * You can do the lesser than and great than operators here
	 * since the ASCII value is being read.
	 *
	 * 	A - Z = 41 - 90
	 * 	a - z = 97 - 122
	 */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z')) {
		printf("%c is an alphabet.", c);
	} else {
		printf("%c is not an alphabet.", c);
	}
}