typedef long d __attribute__((__vector_size__(sizeof(long))));

 d fn2() {
    long c;
    d f;

    // Inlined code from fn1()

    // Body of fn1 is empty, so c is uninitialized
    // It can be removed since it is not used

    f = {c};
    return f;
}

int main() {
    return 0;
}