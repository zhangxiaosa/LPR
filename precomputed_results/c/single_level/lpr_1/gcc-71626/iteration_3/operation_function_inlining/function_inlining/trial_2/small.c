typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1() {}

int main() {
    d result = (d){fn1};
    // Function inlined: result = (d){fn1};
    // Rest of the main function code
    return 0;
}