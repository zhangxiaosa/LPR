
void fn1() {
    long a;
    long b;
}

typedef a d __attribute__((__vector_size__(sizeof(long)));

d fn2() {
    long c = fn1;
    d f = {c};
    return f;
}

int main() {
    long a;
    long b;
    
    a = fn2;
    b = a;
    
    return b;
}
