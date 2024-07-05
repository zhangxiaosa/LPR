
#include <stdio.h>

// Decompose the `struct h` data type into its primary data types
int i; // signed integer
long j; // long integer
unsigned k; // unsigned integer

// Function to modify the `p5` struct
void modify_p5(struct h* p5) {
    p5->i = 10; // assign 10 to the `i` field
    p5->j = 20; // assign 20 to the `j` field
    p5->k = 30; // assign 30 to the `k` field
}

// Function to print the `p5` struct
void print_p5(struct h* p5) {
    printf("i = %d, j = %ld, k = %u\n", p5->i, p5->j, p5->k);
}

int main() {
    struct h p5; // declare a `struct h` variable
    modify_p5(&p5); // call the `modify_p5` function to modify the `p5` struct
    print_p5(&p5); // call the `print_p5` function to print the `p5` struct
    return 0;
}
