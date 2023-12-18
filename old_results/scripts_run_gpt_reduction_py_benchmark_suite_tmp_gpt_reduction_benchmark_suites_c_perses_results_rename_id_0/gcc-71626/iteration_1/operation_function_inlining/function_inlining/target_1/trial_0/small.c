typedef long d __attribute__((__vector_size__(sizeof(long))));

fn1() {}

d fn2() {
    d result;
    // Inlined body of fn1() replaces the function call fn1()
    result = (d){};  // Replace this line with the body of fn1() if it existed
    
    return result;
}

int main() {}
