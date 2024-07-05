
#include <stdio.h>

int main() {
    int q = 0xC3L;
    int r[5][9][5];
    for (q = 0; q < 5; q++) {
        r[q][q][q] = 0xC3L;
    }
    return 0;
}
