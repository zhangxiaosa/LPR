typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

void fn1(int p1) { printf("checksum = %X\n", p1); }

unsigned j;
void fn2(int p1) { j = p1; }

struct p {
  int ab;
  signed int q : 22;
};

struct r {
  unsigned int ab;
  unsigned int s;
};

struct r t;
unsigned f u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

d fn5(e p1, signed int p2, d p3, f p4, f p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  int i;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++)
    fn2(v[i].q);
  fn1(j);
  return 0;
}