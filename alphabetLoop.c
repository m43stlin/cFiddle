#include <stdio.h>

int main() {
	char c;

	printf("Enter 'u' to display alphabets in uppercase. And enter 'l' to display"
				   "characters in lowercase: ");
	scanf("%c", &c);

	if (c == 'U' || c == 'u') {
		for (c = 'A'; c <= 'Z'; ++c) {
			printf("%c", c);
		}
	} else if (c == 'L' ||  c =='l') {
		for (c = 'a'; c <= 'z'; ++c) {
			printf("%c", c);
		}
	} else {
		printf("You entered an invalid character");
	}

	return 0;
}

