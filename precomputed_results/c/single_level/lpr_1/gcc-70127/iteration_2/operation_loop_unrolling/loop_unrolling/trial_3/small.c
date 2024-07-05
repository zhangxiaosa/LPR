typedef int c;
typedef unsigned d;
typedef unsigned e;
void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
unsigned j;
void fn2(p1) { j = p1; }
struct p {
  c ab;
  signed q : 22;
};
struct r {
  unsigned ab;
  unsigned s;
};
struct r t;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
d fn5(e p1, signed p2, d p3, unsigned p4) {
  struct p a = {8L, 666};
  a = v[0] = w;
  v[0] = a;
  a = v[0] = w;
  v[0] = a;
  return 0;
}
int main() {
  int i;
  fn5(t.ab, 3, 2, t.s);
  for (i = 0; i < 1; i++)
    fn2(v[i].q);
  fn1(j, 0);
  return 0;
}