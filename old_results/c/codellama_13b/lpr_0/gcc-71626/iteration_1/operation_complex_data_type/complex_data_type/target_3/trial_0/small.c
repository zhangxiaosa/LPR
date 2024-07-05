
typedef long d;

d fn1() {
    // function body
}

d fn2() {
    return (d){fn1};
}

main() {
    fn2();
}
