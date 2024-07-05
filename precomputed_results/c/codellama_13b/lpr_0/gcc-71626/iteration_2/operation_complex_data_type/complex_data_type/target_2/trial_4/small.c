
typedef long d __attribute__((__vector_size__(sizeof(long))));

struct d_struct {
    long x;
    long y;
};

d fn1() {
    return (d){x: 1, y: 2};
}

d fn2() {
    return (d){x: fn1.x, y: fn1.y};
}

int main() {
    d d1 = fn1();
    d d2 = fn2();
    printf("%ld %ld\n", d1.x, d1.y);
    printf("%ld %ld\n", d2.x, d2.y);
    return 0;
}
