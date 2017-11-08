#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	int isLowercaseVowel, isUpperCaseVowel;

	/*
	 * Prompt the user to enter an alphabet character, continue
	 * to prompt them until they do.
	 */
	do {
		printf("Enter an alphabet: ");
		scanf("%c", &c);
	}
	while(!isalpha(c));

	isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='u');
	isUpperCaseVowel= (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='U');

	(isLowercaseVowel || isUpperCaseVowel) ? printf("%c is a vowel", c) :
	printf("%c is a consonant", c);

	return 0;
}