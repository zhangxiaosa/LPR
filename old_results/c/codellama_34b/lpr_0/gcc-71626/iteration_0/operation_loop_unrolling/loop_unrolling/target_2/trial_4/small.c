
<SYS>

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {
  int xxx = 0;
  while (xxx < 10) {
    xxx++;
    // loop body
  }
}

// Optimized program
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {
  int xxx = 0;
  for (int i = 0; i < 10; i++) {
    // loop body
  }
}

</SYS>
