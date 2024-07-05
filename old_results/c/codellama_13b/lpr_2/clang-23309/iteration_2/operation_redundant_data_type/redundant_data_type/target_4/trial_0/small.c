
typedef int16_t short;

int16_t fn2(int16_t p1, int16_t p2) { return p1 - p2; }
int16_t fn3(int16_t p1, int16_t p2) { return p1 - p2; }
uint16_t fn4(uint16_t p1, uint16_t p2) { return p1; }
int16_t fn5(int16_t p1, int16_t p2) { return p2; }
int16_t fn6(int16_t p1, int16_t p2) { return p1 - p2; }
int16_t p;
int16_t t;
int16_t v;
int16_t w;
int16_t ab;
int16_t ac = 1;
int16_t fn10(int16_t, int16_t);
int16_t fn12(int16_t, int16_t, int16_t, int16_t, int16_t);
int16_t fn13() {
  fn10(v, t);
  return 0;
}
int16_t fn10(int16_t p1, int16_t p2) {
  fn12(2, 248, p2, 1, p1);
  return 0x2F2F6D26;
}
int16_t fn12(int16_t p1, int16_t p2, int16_t p3, int16_t p4, int16_t p5) {
  int16_t al = 3;
  int16_t am = 1;
  int16_t an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    int16_t ao = 0xBCD1;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1)
      v = 1;
  }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
