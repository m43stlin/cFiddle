#include <stdio.h>

int main() {
	int n;
	float arr[100];

	/*
	 * Ask for the number of elements the user wants to compare
	 * values of and store it in n.
	 */
	printf("Enter total number of elements you wish to compare: ");
	scanf("%d", &n);
	printf("\n");

	/*
	 * Allow the user to enter the numbers they want to compare
	 * and store them in arr.
	 */
	for (int i = 0; i < n; ++i) {
		printf("Entry number %d: ", i+1);
		scanf("%f", &arr[i]);
	}

	/*
	 * Loop to store the largest number to arr[0], notice that
	 * the initial value of the loop variable is 1.
	 *
	 * If the element in arr[0] is less than the next element
	 * in the array then set arr[0] to that element.
	 */
	for (int j = 1; j < n; ++j) {
		if(arr[0] < arr[j])
			arr[0] = arr[j];
	}

	printf("Largest element = %.2f", arr[0]);

	return 0;
}