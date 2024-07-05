
<SYS>

// Original program:
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {}

// Optimized program:
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {
    // do { ... } while (xxx);
    d result = fn2();
    while (xxx) {
        // ...
        result = fn2();
    }
    return result;
}

</SYS>
