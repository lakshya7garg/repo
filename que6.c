#include <stdio.h>
//program to count total set bits in all numbers from 1 to n
int countSetBits(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
    }
    return count;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int totalSetBits = countSetBits(n);
    printf("Total set bits from 1 to %d: %d\n", n, totalSetBits);
    return 0;
}
