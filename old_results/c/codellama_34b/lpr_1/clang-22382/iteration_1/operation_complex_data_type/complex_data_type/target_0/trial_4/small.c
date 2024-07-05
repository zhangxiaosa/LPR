
#include <stdio.h>

// Struct definition
struct h {
    signed int i;
    long j;
    unsigned int k;
};

// Function definition
static struct h fn1(struct h p5) {
    // Extract individual variables from struct
    signed int i = p5.i;
    long j = p5.j;
    unsigned int k = p5.k;

    // Use individual variables in function
    printf("i: %d, j: %ld, k: %u\n", i, j, k);

    // Return struct with updated values
    struct h result = {i, j, k};
    return result;
}

// Function definition
long fn2() {
    // Declare struct variable
    struct h p;

    // Call function with struct as argument
    fn1(p);

    // Loop indefinitely
    for (;;) {
        // Declare struct variable
        struct h r;

        // Assign struct variables to each other
        p = r = p;
    }
}

int main() {
    // Declare struct variable
    struct h p;

    // Call function with struct as argument
    fn1(p);

    // Loop indefinitely
    for (;;) {
        // Declare struct variable
        struct h r;

        // Assign struct variables to each other
        p = r = p;
    }

    return 0;
}
