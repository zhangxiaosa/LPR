
#include <iostream>

int main() {
    int k;
    unsigned l;
    volatile int m[5][8];

    for (;;) {
        for (; l; l++) {
            for (k = 0; k >= -27; k = k - 6) {
                std::cout << "Hello, world!" << std::endl;
            }
        }
    }

    return 0;
}
