
#include <iostream>

int main() {
    int k;
    unsigned l;
    volatile int m[5][8];

    for (k = 0; k < 5; k++) {
        for (l = 0; l < 8; l++) {
            m[k][l] = 0;
        }
    }

    for (k = 0; k < 5; k++) {
        for (l = 0; l < 8; l++) {
            std::cout << m[k][l] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
