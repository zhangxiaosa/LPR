void fn1(int p1) {
  printf("checksum = %X\n", p1);
}

int j;

void fn2(int p1) {
  j = p1;
}

struct p {
  int ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    v[p2] = w;
  }
}

int main() {
  int i;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++) {
    fn2(v[i].q);
  }
  fn1(j);
  return 0;
}