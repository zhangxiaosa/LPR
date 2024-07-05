typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

int main() {
    // Body of fn1 inlined
}
