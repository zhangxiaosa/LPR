
<SYS>

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {}

// Optimization of do { ... } while (xxx);

int main() {
    int xxx = 0;
    do {
        // Body of the loop
        xxx = xxx + 1;
    } while (xxx < 10);
    return 0;
}

</SYS>
