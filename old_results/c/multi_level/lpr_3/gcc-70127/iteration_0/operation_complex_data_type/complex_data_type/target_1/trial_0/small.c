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

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  struct p a = {8, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  unsigned j = v[0].q;
  fn1(j, b);
  signed int w_ab = 0x1C87E74FL;
  signed int w_q = 816;
  struct p w = {w_ab, w_q};
  return 0;
}