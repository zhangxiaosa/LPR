char fn2(char p1, int p2) { return p1; }

unsigned v_value;
unsigned u;
int main() {
  unsigned e = 0x9EE7F9D1C772505BLL;
  for (; u < 51; ++u)
    v_value = fn2(v_value, 3) + e;
  printf("checksum = %x\n", v_value);
  return 0;
}