
#include <iostream>

using namespace std;

long fn1() {}

long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
    return (d){fn1};
}

int main() {
    return 0;
}
