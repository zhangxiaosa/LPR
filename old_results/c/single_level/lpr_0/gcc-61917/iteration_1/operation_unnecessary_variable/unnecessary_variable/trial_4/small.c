typedef unsigned f;

f fn2(f p1, f p2) { return p1 - p2; }

volatile f m[5][8];

unsigned fn3(f p1) {
  for (;;) {
    for (unsigned l = 0; l; l++)
      p1 = fn2(0x4FL, p1);
    p1 || m[2][5];
  }
}

int main() {}
