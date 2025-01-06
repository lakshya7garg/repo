#include <stdio.h>
//program to find square of a number without * or pow func.
int main() {
    int num, square = 0, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        square += num;
    }
    printf("Square of %d is: %d\n", num, square);
    return 0;
}
