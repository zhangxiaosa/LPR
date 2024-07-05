char fn2(char p1, int p2) { return p1; }

int fn3(int p1, int p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_00;

int main() {
  int d = 2L;

  // Unrolled loop iterations
  int temp1_0 = fn3(4L, d);
  int temp2_0 = fn2(v_00 = temp1_0, 3);
  d = fn4(temp2_0, 0x9EE7F9D1C772505BLL);

  int temp1_1 = fn3(4L, d);
  int temp2_1 = fn2(v_00 = temp1_1, 3);
  d = fn4(temp2_1, 0x9EE7F9D1C772505BLL);

  // Repeat the unrolled iterations until u < 51 is satisfied
  // For each unrolled iteration, increment u
  // ...

  printf("checksum = %%X\n", v_00);
  return 0;
}