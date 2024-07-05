
typedef struct {
    long x;
    long y;
} d;

d fn1() {
    d result;
    result.x = 0;
    result.y = 0;
    return result;
}

d fn2() {
    d result;
    result.x = fn1().x;
    result.y = fn1().y;
    return result;
}

int main() {
    d d1 = fn1();
    d d2 = fn2();
    return 0;
}
