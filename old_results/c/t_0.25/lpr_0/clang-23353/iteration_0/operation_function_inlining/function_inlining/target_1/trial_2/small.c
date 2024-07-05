typedef char a;
typedef int b;
typedef unsigned c;

a fn1(a p1, a p2) {
  return p1 * p2;
}

b i;

b *fn2(b *p2) {
  a p3;
  for (p3 = 6; p3 != -7; p3--)
    i ^= p3 * i && 1L;
  return p2;
}

int main() {
  return 0;
}