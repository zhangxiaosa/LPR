typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }
b o;
a p;
int main() {
  int i;
  b r = o;
  c s = 1L;
  i = 0;
  while (i < 10) {
    // Loop body iteration 1
    while (r > s)
      r -= 1;

    // Loop body iteration 2
    while (r > s)
      r -= 1;

    // Loop body iteration 3
    while (r > s)
      r -= 1;

    // Loop body iteration 4
    while (r > s)
      r -= 1;

    // Loop body iteration 5
    while (r > s)
      r -= 1;

    // Loop body iteration 6
    while (r > s)
      r -= 1;

    // Loop body iteration 7
    while (r > s)
      r -= 1;

    // Loop body iteration 8
    while (r > s)
      r -= 1;

    // Loop body iteration 9
    while (r > s)
      r -= 1;

    // Loop body iteration 10
    while (r > s)
      r -= 1;

    i++;
  }

  if (p = r)
  {
    i += 10;
  }

  fn1(p, 0);
  return 0;
}