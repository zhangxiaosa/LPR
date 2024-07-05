char fn2(char p1, int p2) { return p1; }

unsigned v_value;
unsigned u;
int main() {
  int d = 2;
  for (; u < 51; ++u)
    d = fn2(v_value = d, 3);
  printf("checksum = %x\n", v_value);
  return 0;
}