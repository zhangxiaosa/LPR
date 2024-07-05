typedef char a;

typedef short b;

typedef int c;

typedef unsigned d;

void fn1(d p1, int p2) { printf("checksum = %X\n", p1); }

b o;

a p;

int main() {

  b q;

  int i;

  b r = o;

  q = r;

  c s = 1L;

  // Unrolled loop: while (q > s) 10 times

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  while (q > s)

    q -= 1;

  if (p = q)

    ;

  int t = 0;

  fn1(p, t);

  return 0;
}
