
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef long a;

// Define a function pointer type for the function fn1
typedef void (*fn1_ptr)(void);

// Define a vector type for the function pointers
typedef struct {
    fn1_ptr ptr;
} d;

// Define a function that returns a vector of function pointers
d fn2() {
    d vec;
    vec.ptr = fn1;
    return vec;
}

int main() {
    // Declare a variable of type a
    a x;

    // Declare a variable of type d
    d vec;

    // Assign the result of fn2 to vec
    vec = fn2();

    // Print the address of fn1
    printf("Address of fn1: %p\n", vec.ptr);

    return 0;
}
