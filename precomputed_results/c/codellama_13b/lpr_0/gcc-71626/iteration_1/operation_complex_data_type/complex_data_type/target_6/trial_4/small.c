c
#include <stdio.h>

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
    return (d){1, 2, 3, 4, 5};
}

d fn2() {
    return (d){fn1};
}

int main() {
    d fn1_vector = fn1();
    long fn1_value = fn1_vector[0];
    int fn1_vector_size = sizeof(fn1_vector) / sizeof(long);
    long *fn1_vector_data = (long *)fn1_vector;
    long fn1_value_array[fn1_vector_size];
    for (int i = 0; i < fn1_vector_size; i++) {
        fn1_value_array[i] = fn1_vector_data[i];
    }
    return 0;
}
