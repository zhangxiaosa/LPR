struct p {
  int ab;
  int q : 22;
};
unsigned j;
int t_s;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};
unsigned fn5(unsigned p3, unsigned p4, unsigned p5) {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
}
int main() {
  fn5(2, t_s, 9u);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
