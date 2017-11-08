#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, determinant, root1, root2, realPart, imaginaryPart;

	printf("Enter coefficients a, b, and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	/*
	 * Tell the nature of the roots:
	 * 		> 0 : Roots are real and different.
	 * 		= 0 : Roots are real and equal.
	 * 		< 0 : Roots are complex and different.
	 */
	determinant = b*b-4*a*c;

	/*
	 * Condition for real and different roots
	 */
	if (determinant > 0) {
		root1 = (-b+sqrt(determinant))/(2*a);
		root2 = (-b-sqrt(determinant))/(2*a);

		printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
	}

	/*
	 * Condition for real and equal roots.
	 *
	 * In this case root1 and root2 are equal so no need
	 * to do any calculation on root2.
	 */
	else if (determinant == 0) {
		root1 = -b/(2*a);

		printf("root1 = root2 = %.2lf;", root1);
	}

	/*
	 * If roots are not real
	 */
	else {
		realPart = -b/(2*a);
		imaginaryPart = sqrt(-determinant)/(2*a);
		printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imaginaryPart,
				realPart, imaginaryPart);
	}

	return 0;
}
