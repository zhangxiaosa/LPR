
inline void fn1() {
    // Your code here
}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    return (d){fn1};
}

int main() {
    fn2();
    return 0;
}
