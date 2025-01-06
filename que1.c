#include <stdio.h>
//program to count set bits in an integer
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    printf("Number of set bits: %d\n", count);
    return 0;
}

