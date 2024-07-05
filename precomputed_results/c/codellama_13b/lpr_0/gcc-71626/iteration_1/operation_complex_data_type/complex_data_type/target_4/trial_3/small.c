
// Decomposition of variables with primary data type
typedef long d;

d fn1() {
    // Function body
}

d fn2() {
    return fn1();
}

int main() {
    fn2();
    return 0;
}
