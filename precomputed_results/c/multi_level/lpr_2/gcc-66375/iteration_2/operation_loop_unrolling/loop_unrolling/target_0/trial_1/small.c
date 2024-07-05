unsigned u_opt = 0;
unsigned v3;
int main() {
  int d = 2L;

  // Unrolled loop
  v3 = d;
  char p1 = v3;
  char fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  v3 = d;
  p1 = v3;
  fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  // Repeat the previous two statements 49 more times
  // ...

  // Last iteration
  v3 = d;
  p1 = v3;
  fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  printf("checksum = %X\n", v3);
  return 0;
}