
<SYS>

// Original program
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {}

// Optimized program
#define UNROLL_FACTOR 4

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }

int main() {
    d result;
    int i;

    for (i = 0; i < UNROLL_FACTOR; i++) {
        result = fn2();
    }

    return result;
}

</SYS>
