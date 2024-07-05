c
// Decompose the program into variables with primary data types
long fn1() {
  // function body
}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() { return (d){fn1}; }

int main() {
  // main function body
}

// Decomposed program
long fn1_decomp() {
  // function body
}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long fn2_decomp() { return (d){fn1_decomp}; }

int main_decomp() {
  // main function body
}
