int fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned l;
volatile unsigned m[5][8];
unsigned fn3(unsigned p1) {
  for (;;) {
    for (; 1;)
      p1 = fn2(0x4FL, p1);
    p1 || m[2][5];
  }
}

int main() {}
