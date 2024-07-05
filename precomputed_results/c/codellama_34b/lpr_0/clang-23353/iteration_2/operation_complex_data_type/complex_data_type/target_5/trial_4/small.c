
#include <stdio.h>

int main() {
    int i, j;
    int base[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    for (int i = 0; i < size; i++) {
        j ^= (base[i] * i) && 1L;
    }

    printf("%d\n", j);
    return 0;
}
