
int checksum(int p1, int p2, int p3, int p4) {
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    sum += p1[i] << (i * 8);
  }
  return sum;
}

int main() {
  int p1, p2, p3, p4;
  int v;
  p1 = 7;
  p2 = 7;
  p3 = 248;
  p4 = 0;
  v = checksum(p1, p2, p3, p4);
  printf("checksum = %X\n", v);
  return 0;
}
