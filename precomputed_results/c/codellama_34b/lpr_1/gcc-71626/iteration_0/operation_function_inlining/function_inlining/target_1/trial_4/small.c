
#include <stdio.h>
#include <stdlib.h>
#include <vector>

int fn1(int x) {
    return x * x;
}

int main() {
    int result = fn1(5);
    printf("Result: %d\n", result);
    return 0;
}
