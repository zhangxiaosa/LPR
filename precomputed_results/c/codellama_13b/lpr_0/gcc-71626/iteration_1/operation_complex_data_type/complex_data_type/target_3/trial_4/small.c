
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
    long a[10], b[10], c[10], d[10];
    fn1(a, b, c, d);
    return (d){fn1};
}

int main() {
    fn2();
    return 0;
}
