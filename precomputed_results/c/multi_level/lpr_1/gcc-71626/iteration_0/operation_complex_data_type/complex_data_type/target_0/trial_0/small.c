typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    long c_elem0 = fn1;
    d f = {c_elem0};
    return f;
}

main() {}