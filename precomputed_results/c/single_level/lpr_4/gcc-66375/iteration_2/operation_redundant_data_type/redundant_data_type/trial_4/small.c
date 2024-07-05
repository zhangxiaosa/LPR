void fn1(unsigned int p1, int p2) {
  printf("checksum = %X\n", p1);
}

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned int fn4(unsigned int p1, unsigned int p2) {
  return p1 + p2;
}

unsigned int p;
unsigned int t;
unsigned int u;
unsigned int v[4];

unsigned int fn8(char p1, int p2) {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned int e[9];
    e[0] = 0x9EE7F9D1C772505B;
    v[3] = fn3(4L, d);
    d = fn2(v[3], 3);
    d = fn4(d, e[0]);
  }
  return p1;
}

int main() {
  int j;
  int b = 0L;
  fn8(t, 0xFBL);
  for (j = 0; j < 4; j++)
    p = v[j];
  fn1(p, 0);
  return b;
}