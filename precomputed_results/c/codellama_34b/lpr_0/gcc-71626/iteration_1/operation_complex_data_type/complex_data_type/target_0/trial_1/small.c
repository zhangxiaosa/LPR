
typedef long d __attribute__((__vector_size__(sizeof(long))));

// Define new variables for each element of the d vector
long d1, d2, d3, d4;

// Initialize each new variable with the corresponding element of the d vector
d1 = d[0];
d2 = d[1];
d3 = d[2];
d4 = d[3];

// Use the new variables in the program instead of the d vector
fn1() {}
d fn2() { return (d){d1, d2, d3, d4}; }

main() {}
