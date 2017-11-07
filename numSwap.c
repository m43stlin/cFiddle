#include <stdio.h>

int main() {
	double firstNumber, secondNumber;

	printf("Enter first number: ");
	scanf("%lf", &firstNumber);

	printf("Enter second number: ");
	scanf("%lf", &secondNumber);

	/*
	 * Eg. 15 - 20
	 * firstNumber = -10
	 */
	firstNumber = firstNumber - secondNumber;
	printf("1.%.2lf\n", firstNumber);

	/*
	 * secondNumber = -10 + 25 = 15
	 */
	secondNumber = firstNumber + secondNumber;
	printf("2.%.2lf\n",secondNumber);

	/*
	 * firstNumber = 15 -- 10 = 25
	 */
	firstNumber = secondNumber - firstNumber;

	printf("\nAfter swap, firstNumber = %.2lf\n", firstNumber);
	printf("\nAfter swap, secondNumber = %.2lf\n", secondNumber);

}