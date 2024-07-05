typedef signed a;

typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }

f j;

struct p {
  c ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;
f u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

void inline_fn5() {
  struct p a = {8L, 666};
  int p2;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

a fn6() { inline_fn5(); }

int main() {
  int i;
  int b = 0;
  fn6();
  for (i = 0; i < 1; i++)
    j = v[i].q;
  j = j;
  fn1(j, b);
  return 0;
}