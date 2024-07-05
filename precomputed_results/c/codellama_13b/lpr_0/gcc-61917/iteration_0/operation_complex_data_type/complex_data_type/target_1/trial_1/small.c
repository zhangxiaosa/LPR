
typedef int a;
typedef int c;
typedef unsigned f;

register f fn2_result;

unsigned fn2(unsigned p1, unsigned p2) {
  fn2_result = p1 - p2;
  return fn2_result;
}

c k;
unsigned l;
unsigned m[5][8];

unsigned fn3(unsigned p1) {
  a o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k -= 6)
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {}
