void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }
unsigned j;
void fn2(p1) { j = p1; }
void fn3(p1) { fn2(p1); }

int ab;
signed int q : 22;

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;
unsigned u;
int v[1][2];
int w[2] = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a[2] = {8L, 666};
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
    fn3(v[i][1]);
  fn1(j, b);
  return 0;
}