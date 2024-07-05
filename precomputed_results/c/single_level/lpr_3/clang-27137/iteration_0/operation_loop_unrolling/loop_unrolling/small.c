typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
d h;
void fn2(p1) { h = p1; }
b o;
a p;
a fn5() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;

  // Loop unrolling
  while (q > s) // Iteration 1
    q -= 1;

  while (q > s) // Iteration 2
    q -= 1;

  while (q > s) // Iteration 3
    q -= 1;

  while (q > s) // Iteration 4
    q -= 1;

  while (q > s) // Iteration 5
    q -= 1;

  while (q > s) // Iteration 6
    q -= 1;

  while (q > s) // Iteration 7
    q -= 1;

  while (q > s) // Iteration 8
    q -= 1;

  while (q > s) // Iteration 9
    q -= 1;

  while (q > s) // Iteration 10
    q -= 1;

  if (p = q)
    ;
}

int main() {
  fn5();
  fn2(p);
  printf("checksum = %X\n", h);
  return 0;
}