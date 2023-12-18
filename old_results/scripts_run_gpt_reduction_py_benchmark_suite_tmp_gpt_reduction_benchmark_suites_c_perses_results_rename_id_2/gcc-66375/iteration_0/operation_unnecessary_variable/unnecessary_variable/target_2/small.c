typedef char a;
typedef int d;
typedef unsigned f;
typedef unsigned g;
a fn2(a p1, int p2) { return p1; }
f p;
g u;
g v[4];
int main() {
  d d = 2L;
  for (; u < 51; ++u) {
    v[3] = d;
    d = fn2(v[3], 3) + 0x9EE7F9D1C772505BLL;
  }
  p = v[3];
  printf("checksum = %X\n", p);
  return 0;
}