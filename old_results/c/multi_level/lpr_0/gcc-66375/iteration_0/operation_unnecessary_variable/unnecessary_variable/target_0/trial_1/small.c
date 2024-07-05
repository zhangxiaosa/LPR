char fn2(int p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int u;

int main() {
  int i;
  int checksum = 2;
  int v3;
  for (; u < 51; ++u) {
    int e[9];
    for (i = 0; i < 9; i += 3)
      e[i] = 0x9EE7F9D1C772505B;
    checksum = fn2(checksum, 3);
    checksum = checksum + e[0];
  }
  v3 = fn3(4, v3);
  printf("checksum = %d\n", v3);
  return 0;
}