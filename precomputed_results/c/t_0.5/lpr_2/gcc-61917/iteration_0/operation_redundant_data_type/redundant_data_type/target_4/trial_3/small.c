typedef unsigned e;
int k;
e l;
volatile unsigned m[5][8];

int fn3(unsigned p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = -p1;
  }
}

int main() {}
