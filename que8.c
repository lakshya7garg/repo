#include <stdio.h>
//program to divide two int w/o multiplication, division and mod operator
int main() {
    int dividend, divisor, quotient = 0, remainder = 0;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    remainder = dividend;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

