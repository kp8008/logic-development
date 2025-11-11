#include <stdio.h>

int main() {
    int n, square, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    square = n * n;

    int temp = n;
    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int divisor = 1;
    for (int i = 0; i < count; i++) {
        divisor = divisor*10;
    }

    int lastDigits = square % divisor;

    if (lastDigits == n)
        printf("%d is an Automorphic number.\n", n);
    else
        printf("%d is NOT an Automorphic number.\n", n);

    return 0;
}
