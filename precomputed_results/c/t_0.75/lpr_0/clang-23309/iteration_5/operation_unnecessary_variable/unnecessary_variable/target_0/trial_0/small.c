short v;

short fn11(short p1, int p3) {
  p3 = 1;
  if (0 - p3 & 1)
    v = 0;
  return 1;
}

int main() {
  fn11(2, 0);
  printf("checksum = %hx\n", v);
  return 0;
}