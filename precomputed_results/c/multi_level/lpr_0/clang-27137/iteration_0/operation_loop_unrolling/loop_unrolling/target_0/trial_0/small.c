typedef char a;

typedef short b;

typedef int c;

b o;
a p;

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  
  // Unrolled loop: for (i = 0; i < 10; i++)
  for (i = 0; i < 10; i += 4) {
    // Iteration 1
    while (q > s) {
      q -= 1;
    }
  
    // Iteration 2
    while (q > s) {
      q -= 1;
    }
  
    // Iteration 3
    while (q > s) {
      q -= 1;
    }
  
    // Iteration 4
    while (q > s) {
      q -= 1;
    }
  }
  
  if (p = q)
    ;
  
  printf("checksum = %X\n", p);
  return 0;
}