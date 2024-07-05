
void fn1() {}

int main() {
    typedef long d __attribute__((__vector_size__(sizeof(long))));
    d fn2() { return (d){0}; }
    fn2();
    return 0;
}
