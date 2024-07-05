
#include <stdio.h>

int fn2(int p1_int, int p2_int) {
    return p1_int - p2_int;
}

int k;
int l;

int fn3(p1_int) {
    int o;
    for (k = 0; k >= -27; k = k - 6)
        for (l = 0; l < 5; l++)
            p1_int = fn2(o, p1_int);
    return p1_int;
}

int main() {

    // Note: The variable "o" is not used outside of the function "fn3", so it can be optimized out

    int result = fn3(10);
    printf("Result: %d\n", result);

    return 0;
}
