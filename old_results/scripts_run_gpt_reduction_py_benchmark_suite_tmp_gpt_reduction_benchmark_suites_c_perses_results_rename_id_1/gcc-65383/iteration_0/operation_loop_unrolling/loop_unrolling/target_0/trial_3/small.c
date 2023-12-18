typedef int b;
typedef unsigned c;
typedef unsigned d;

d g;
b h[] = {0x92A1D2CDL, 0x92A1D2CDL, 0x92A1D2CDL};
static d i = 0x06D7L;

d fn2() {
    c q;

    // Duplicated loop body
    q = 0xC3L;
    b r[5][9][5];
    g = r[i][i][i];

    // Duplicated loop body
    q = 0xC3L;
    // No need to redefine r or g again

    // ...

    // Additional duplicated loop bodies

    // ...

    return q;
}

int main() {
    fn2();
}