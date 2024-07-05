#include

typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1() {}

main() {}

int main() {
    d f = {fn1};
    return f;
}