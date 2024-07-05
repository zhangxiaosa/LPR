char fn2(char p1, int p2) { return p1; }

unsigned v_value;
unsigned u;

int main() {
  int d = 2;
  unsigned e = 0x9EE7F9D1C772505BLL;
  for (; u < 51; ++u)
    d = fn2(v_value = d, 3) + 0x9EE7F9D1C772505BLL;
  printf("checksum = %x\n", v_value);
  return 0;
}