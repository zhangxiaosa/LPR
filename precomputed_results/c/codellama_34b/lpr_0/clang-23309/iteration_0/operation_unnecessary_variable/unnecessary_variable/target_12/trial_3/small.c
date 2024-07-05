
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }

void fn9(g p1, char *p2, int p3) { p = p1; }

int main() {
  fn9(248UL, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}
