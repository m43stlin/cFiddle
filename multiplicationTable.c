#include <stdio.h>

int main() {
	int n, i, range;

	printf("Enter an integer: ");
	scanf("%d", &n);

	printf("Enter range: ");
	scanf("%d", &range);

	for (int i = 1; i < range+1 ; ++i) {
		printf("%d * %d = %d\n", n, i, n*i);
	}

}