
<SYS>

typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() { return (d){fn1}; }
main() {}

// Optimized loop
do {
  // Loop body
  fn1();
  // Increment loop variable
  i++;
} while (i < n);

</SYS>
