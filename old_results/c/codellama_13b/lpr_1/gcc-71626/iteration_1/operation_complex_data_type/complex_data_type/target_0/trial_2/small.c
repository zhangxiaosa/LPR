
typedef long a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

struct fn1 {
    void (*fn1_ptr)();
};

struct fn2 {
    struct fn1 fn2_struct;
};

struct fn2 fn2() {
    struct fn2 f;
    f.fn2_struct.fn1_ptr = fn1;
    return f;
}

int main() {}
