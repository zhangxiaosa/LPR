typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
f j;
struct p {
  c ab;
  signed q : 22;
};
struct r {
  unsigned ab;
  unsigned s;
};
struct r t;
f u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
d fn5(e p1, a p2, d p3, f p4, f p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    // First iteration of unrolled loop
    a = v[p2] = w;
    v[p2] = a;

    // Second iteration of unrolled loop
    a = v[p2] = w;
    v[p2] = a;
  }
}
int main() {
  int i;
  fn5(t.ab, 3, 2, t.s, 9);
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}