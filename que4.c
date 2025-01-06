#include <stdio.h>
//program to find position of only set bit in a number
int main() {
    int num, position = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0 || (num & (num - 1)) != 0) {
        printf("Invalid input. The number must have exactly one set bit.\n");
    } else {
        while ((num & 1) == 0) {
            num = num >> 1;
            position++;
        }
        printf("The position of the set bit is: %d\n", position);
    }

    return 0;
}

