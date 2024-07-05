char fn2(char p1, int p2) { return p1; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int fn11() {
  int d = 2L;
  for (; u < 51; ++u)
    d = 2L;  // Constant propagation optimizes out the update of 'd'
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", 2L);  // Constant propagation optimizes out 'v_0_3'
  return 0;
}