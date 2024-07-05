typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
d f;
a g;
b fn1() {
    a i = g;
    c j = 0x24F96B7BL;
    c l = 1L;
    while (i) {
        j--;
        i = j;
        j = j >> l;
        i = j;
        j = j << j;
    }
}

int main() {}
