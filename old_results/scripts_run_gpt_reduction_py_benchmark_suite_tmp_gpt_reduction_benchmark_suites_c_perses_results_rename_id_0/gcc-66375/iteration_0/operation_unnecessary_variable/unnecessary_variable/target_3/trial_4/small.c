char fn2(int p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

int u;

int main() {
  int checksum = 2;
  for (; u < 51; ++u) {
    checksum = checksum + 0x9EE7F9D1C772505B;
  }
  int v3 = 2;
  printf("checksum = %d\n", v3);
  return 0;
}