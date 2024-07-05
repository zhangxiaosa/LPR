
#include <stdio.h>

int fn1(char p1, char p2) {
    return p1 * p2;
}

int fn2(int *p2, char p3) {
    const int i_ = 6;
    for (p3 = i_; p3 != -7; p3--) {
        int temp = fn1(p3, i_);
        j ^= temp && 1L;
    }
    return p2;
}

int main() {
    return 0;
}
