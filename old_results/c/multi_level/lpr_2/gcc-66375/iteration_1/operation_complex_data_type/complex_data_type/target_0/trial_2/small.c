unsigned int u;
unsigned int v[4];
int d = 2;

char fn2(char p1, int p2) {
  return p1;
}

int main() {
  for (; u < 51; ++u) {
    v[3] = d;
    d = fn2(v[3], 3) + 0x9EE7F9D1C772505B;
  }
  printf("checksum = %X\n", v[3]);
  return 0;
}