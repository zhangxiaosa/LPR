
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    // body of fn1()
    return (d){};
}

main() {}
