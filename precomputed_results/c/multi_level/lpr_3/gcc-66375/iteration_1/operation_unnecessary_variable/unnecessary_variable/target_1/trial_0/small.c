char fn2(char p1, int p2) { return p1; }

unsigned v_value;
unsigned u;
int main() {
  int d = 2;
  for (; u < 51; ++u)
    v_value = d;
  printf("checksum = %x\n", v_value);
  return 0;
}