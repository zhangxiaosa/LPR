
typedef struct {
    long elements[16];
} d;

d fn1() {
    d f = {0};
    return f;
}

d fn2() {
    d f = {0};
    f.elements[0] = fn1();
    return f;
}

int main() {
    d main_d = {0};
    main_d.elements[0] = fn2();
    return 0;
}
