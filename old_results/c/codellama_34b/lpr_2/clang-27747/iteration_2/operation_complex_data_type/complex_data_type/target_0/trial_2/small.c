
#include <stdio.h>

struct c {
    int d;
    int e;
    int h;
};

int main() {
    struct c i;
    struct c j;

    // Decomposition of `i` and `j` into primary data types
    int i_d = i.d;
    int i_e = i.e;
    int i_h = i.h;
    int j_d = j.d;
    int j_e = j.e;
    int j_h = j.h;

    // Main program logic
    int n = j_e && i_d;
    int p = i_d | -(i_d && i_d) - n;
    i_d = p;

    return 0;
}
