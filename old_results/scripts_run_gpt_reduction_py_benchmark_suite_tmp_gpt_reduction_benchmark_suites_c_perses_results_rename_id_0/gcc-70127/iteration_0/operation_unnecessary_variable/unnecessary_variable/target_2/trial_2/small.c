void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned j;
struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

signed fn6() {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
}

int main() {
  int b = 0;
  fn6();
  j = v[0].q;
  fn1(j, 0);
  return 0;
}