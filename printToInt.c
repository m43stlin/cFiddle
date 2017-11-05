#include <stdio.h>

int main() {
    int number;

    printf("Enter a digit: ");
    /*
     * Store value of the number the user entered into the command line
     * in number.
     */
    scanf("%d", &number);

    printf("You entered: %d", number);

    return 0;
}