void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
unsigned j;
void fn2(unsigned p1) { j = p1; }
void fn3(unsigned p1) { fn2(p1); }
struct p {
  int ab;
  signed int q : 22;
};
struct r {
  unsigned int ab;
  unsigned int s;
};
struct r t;
unsigned int u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3, unsigned int p4, unsigned int p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 < 1; p2 += 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}
int main() {
  int i;
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++)
    fn3(v[i].q);
  fn1(j, b);
  return 0;
}