
<SYS>

int k;
int l;
volatile int m[5][8];
int fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    p1 || m[2][5];
  }
}
int main() {}

// Constant Propagation

int k;
int l;
volatile int m[5][8];
int fn3(p1) {
  int o = 0;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = 0 - p1;
    p1 || m[2][5];
  }
}
int main() {}

// Copy Propagation

int k;
int l;
volatile int m[5][8];
int fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = p1;
    p1 || m[2][5];
  }
}
int main() {}

// Unused Variable

int k;
int l;
volatile int m[5][8];
int fn3(p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = p1 - p1;
    p1 || m[2][5];
  }
}
int main() {}
