
/* 
 * fn1(): a function with no return type
 * fn2(): a function with return type d
 * d: a complex data type with __attribute__((__vector_size__(sizeof(long))));
 */

typedef long d;

d fn1() {
    // function body goes here
}

d fn2() {
    return (d){fn1};
}

int main() {
    // main function body goes here
    return 0;
}
