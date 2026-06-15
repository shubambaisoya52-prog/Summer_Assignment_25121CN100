#include <stdio.h>

int main() {
    int a, b, x, y, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        gcd = y;
        y = x % y;
        x = gcd;
    }

    gcd = x;

    printf("LCM = %d", (a * b) / gcd);

    return 0;
}