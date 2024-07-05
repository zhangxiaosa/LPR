typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1() {}

inline d fn2() {
    return (d){fn1};
}

int main() {
    d result = fn2();
    return 0;
}