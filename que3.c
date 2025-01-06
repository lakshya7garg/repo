#include <stdio.h>
//program to check whether is a number is power of 2 or not
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && (num & (num - 1)) == 0) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    return 0;
}
