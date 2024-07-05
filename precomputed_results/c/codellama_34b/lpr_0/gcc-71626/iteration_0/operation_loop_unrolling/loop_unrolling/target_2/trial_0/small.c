
<SYS>

// Optimized program with loop unrolling

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {
  int xxx = 0;
  // Loop unrolling with factor 4
  for (int i = 0; i < 4; i++) {
    xxx++;
    // loop body
  }
  // Remainder loop
  while (xxx < 10) {
    xxx++;
    // loop body
  }
}

</SYS>
