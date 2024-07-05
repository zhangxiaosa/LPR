
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() { return (d){fn1}; }

main() {
    int i;
    for (i = 0; i < 1000 / 4; i++) {
        fn2();
        fn2();
        fn2();
        fn2();
    }
    return 0;
}
