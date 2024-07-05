
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the primary data types
typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

// Define the functions
void fn1();
d fn2();

int main() {
    // Declare variables
    a a1;
    d d1;

    // Initialize variables
    a1 = 0;
    d1 = (d){fn1};

    // Call the functions
    fn1();
    d1 = fn2();

    // Print the results
    printf("a1: %ld\n", a1);
    printf("d1: %ld\n", d1);

    return 0;
}

// Define the functions
void fn1() {
    printf("fn1 called\n");
}

d fn2() {
    d d2;
    d2 = (d){fn1};
    return d2;
}
