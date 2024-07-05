
#include <stdio.h>

struct c {
    int d : 18;
    int e;
};

int main() {
    struct c i;
    i.d = 18;
    i.e = 25;

    int n = i.d && i.e;
    i.d = i.e | i.d - n;

    printf("The value of n is: %d\n", n);
    printf("The value of i.d is: %d\n", i.d);

    return 0;
}
