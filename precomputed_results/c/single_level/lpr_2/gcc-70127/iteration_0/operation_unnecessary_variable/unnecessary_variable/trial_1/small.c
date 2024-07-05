void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

unsigned j;

void fn2(p1) { j = p1; }

void fn3(p1) { fn2(p1); }

void fn4(unsigned p1, char *p2, int p3) { fn3(p1); }

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
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
  }
}

int main() {
  int i;

  fn5(t.ab, 3, 2, t.s, 9);

  for (i = 0; i < 1; i++) {
    fn4(w.q, "g_217[i].f1", 0);
  }

  fn1(j, 0);

  return 0;
}