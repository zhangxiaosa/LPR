typedef signed a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;
a fn2() {
    c q = 0xC3L;
    b r[5][9][5];
    if (h[2])
        return q;
    g = r[i][i][i];
    return q; // To prevent compilation error, return a value
}
int main() { fn2(); }