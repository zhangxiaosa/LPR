
int main() {
  // Decompose the struct h type into its constituent parts
  signed i;
  long j;
  unsigned k;

  // Decompose the fn1 function into its constituent parts
  unsigned p1;
  short p2;
  unsigned p3;
  unsigned p4;
  struct h p5;

  // Decompose the fn2 function into its constituent parts
  unsigned p1;

  // Use the variables separately in the program
  i = p1;
  j = p2;
  k = p3;
  p5.j = p4;

  // Use the variables separately in the program
  p1 = i;
  p2 = j;
  p3 = k;
  p4 = p5.j;

  // Use the variables separately in the function
  for (;;) {
    struct h r;
    p = r = p;
  }

  // Use the variables separately in the function
  for (;;) {
    struct h r;
    p = r = p;
  }
}
