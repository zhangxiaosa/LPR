void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

struct p {
  signed ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;
unsigned u;
struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  struct p a = {8, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w_init;
      v[p2] = a;
    }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  unsigned j = 816;
  fn1(j, b);
  return 0;
}