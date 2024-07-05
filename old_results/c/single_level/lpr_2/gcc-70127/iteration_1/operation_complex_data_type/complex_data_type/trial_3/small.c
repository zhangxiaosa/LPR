void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
unsigned j;
void fn2(p1) { j = p1; }
void fn3(p1) { fn2(p1); }
int ab;
signed q : 22;
struct r {
  unsigned ab;
  unsigned s;
};
struct r t;
unsigned u;
int v_ab[1];
signed q[1][67108864] = {0};
struct r w = {0x1C87E74FL, 816};
unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a_ab = 8L;
  signed a_q = 666;
  for (p2 = 0; p2 < 1; p2 += 1)
    for (; u <= 1; u += 1) {
      a_ab = v_ab[p2] = w.ab;
      q[p2] = a_q = w.q;
    }
}
int main() {
  int i;
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++)
    fn3(q[i]);
  fn1(j, b);
  return 0;
}