#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop unrolled section
    if (n >= 1) {
        sum += 1;
    }
    if (n >= 2) {
        sum += 2;
    }
    if (n >= 3) {
        sum += 3;
    }
    if (n >= 4) {
        sum += 4;
    }
    if (n >= 5) {
        sum += 5;
    }

    printf("Sum = %d\n", sum);
    return 0;
}