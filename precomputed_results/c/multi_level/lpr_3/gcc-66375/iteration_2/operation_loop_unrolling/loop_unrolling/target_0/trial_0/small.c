char fn2(p1) { return p1; }

unsigned v_value;
unsigned u;
int main() {
  int d = 2;

  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  // Repeat the above line 46 more times

  printf("checksum = %x\n", v_value);
  return 0;
}