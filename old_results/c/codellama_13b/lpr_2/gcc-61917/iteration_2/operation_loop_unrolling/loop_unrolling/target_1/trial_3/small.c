
int k;
int l;
int o;
volatile unsigned m;

int fn3(p1) {
  for (;;) {
    for (; l; l--) {
      k = 0;
      for (; k >= -27; k -= 6)
        p1 = o - p1;
    }
    p1 || m;
  }
}

int main() {
  int p1 = 0;
  int l = 3;
  int k = 0;
  int o = 1;
  volatile unsigned m = 1;

  for (int i = 0; i < l; i++) {
    k = 0;
    for (; k >= -27; k -= 6)
      p1 = o - p1;
  }
  p1 || m;
}
