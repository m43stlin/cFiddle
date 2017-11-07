#include <stdio.h>

/*
 * The long is a size modifier that may increase the size
 * of a variable during declaration.
 */

int main() {
	int a;
	long b;
	long long c;

	double e;
	long double f;

	printf("Size of int = %ld bytes \n", sizeof(a));
	printf("Size of long = %ld bytes \n", sizeof(b));
	printf("Size of long long = %ld bytes \n", sizeof(c));

	printf("Size of double = %ld bytes \n", sizeof(e));
	printf("Size of long double = %ld bytes \n", sizeof(f));


}