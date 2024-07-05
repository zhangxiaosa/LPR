
typedef long __attribute__((__vector_size__(sizeof(long))));

int fn2() {
    return (fn1);
}

int main() {
    int x = 5;
    return x;
}
